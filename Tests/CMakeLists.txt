
add_subdirectory(googletest)

file(GLOB SOURCE_FILES *.cpp)
add_executable(sorttest ${SOURCE_FILES})

target_link_libraries(sorttest gtest gtest_main SortFunctions)