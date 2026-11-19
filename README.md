# C++ Exercise

A C++20 project using CMake and Visual Studio. It keeps the original
header/source Greeter and adds a separate `.cppm` module example.

## Build

This project is configured with **CMake presets** (`CMakePresets.json`) and the
**Visual Studio 18 2026** generator, which needs no developer environment
because MSBuild resolves the MSVC/SDK include and library paths itself.

`cmake` and `ctest` are not on `PATH` in a plain terminal, so use the CMake
bundled with Visual Studio Build Tools (or the VS Code tasks below):

```powershell
$cmake = 'C:\Program Files (x86)\Microsoft Visual Studio\18\BuildTools\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe'

& $cmake --preset 'Visual Studio Build Tools 2026 Release - amd64'
& $cmake --build --preset 'Visual Studio Build Tools 2026 Release - amd64-debug'
& "$(Split-Path $cmake)\ctest.exe" --preset 'Visual Studio Build Tools 2026 Release - amd64-debug'
```

Build a Release binary with the `-release` build preset instead:

```powershell
& $cmake --build --preset 'Visual Studio Build Tools 2026 Release - amd64-release'
```

In VS Code, open **Terminal > Run Task** and choose **Configure CMake**,
**Build Debug**, **Build Release**, or **Test Debug**.

> Note: `Ctrl+Shift+B` (Run Build Task) runs the **CMake: build** task contributed
> by the *CMake Tools* extension, which builds the preset's `targets`. The build
> presets therefore set `"targets": ["ALL_BUILD"]`: **Visual Studio** is a
> multi-config generator with no `all` target, so `--target all` fails with
> `MSBUILD : error MSB1009: Project file does not exist. Switch: all.vcxproj`.
> Reload the window after editing `CMakePresets.json` so the extension
> recomputes the task definition.

Generated files stay under `out/build/<configure preset>/`:

```powershell
& ".\out\build\Visual Studio Build Tools 2026 Release - amd64\src\Debug\cpp_exercise.exe"
```

> Note: the `build/debug` and `build/release` directories are old **Ninja**
> trees. Ninja does not supply the MSVC environment, so building them from a
> plain shell fails with `C1083: Cannot open include file: 'string'`. Use the
> presets above, or run the build from a *Developer PowerShell for VS 18*.

