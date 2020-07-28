cmake_minimum_required(VERSION 3.0.0)
project(CodePlay VERSION 0.1.0)


set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")

add_subdirectory(SortFunctions)
add_subdirectory(Tests)
add_executable(CodePlay main.cpp)
target_link_libraries(CodePlay SortFunctions)
