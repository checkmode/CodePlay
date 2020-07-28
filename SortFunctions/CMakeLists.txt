

file(GLOB SOURCE_FILES *.cpp)
add_library(SortFunctions SHARED ${SOURCE_FILES})
target_compile_definitions(SortFunctions PRIVATE "EXPORT_FUN")
