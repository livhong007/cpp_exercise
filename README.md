# C++ Exercise

A C++20 project using CMake and Visual Studio. It keeps the original
header/source Greeter and adds a separate `.cppm` module example.

## Build

In VS Code, open **Terminal > Run Task** and choose **Build Debug** or
**Build Release**. Choose **Test Debug** to build and run the tests.

The tasks use the Visual Studio 2026 generator and expect `cmake` and `ctest`
to be available on `PATH`.

```powershell
& ".\out\build\Visual Studio Build Tools 2026 Release - amd64\src\Debug\cpp_exercise.exe"
```
