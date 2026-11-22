add_library(cpp_exercise_lib
    app/greeter.cpp
    codility_test/binary_gap.cpp
)

target_sources(cpp_exercise_lib
    PUBLIC
        FILE_SET CXX_MODULES FILES
            app/cppm_example.cppm
)

target_include_directories(cpp_exercise_lib
    PUBLIC ${CMAKE_SOURCE_DIR}/include
)

add_executable(cpp_exercise main.cpp)
target_link_libraries(cpp_exercise PRIVATE cpp_exercise_lib)
