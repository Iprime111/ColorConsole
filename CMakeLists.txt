cmake_minimum_required (VERSION 3.8 FATAL_ERROR)

project (ColorConsole)

add_library (ColorConsole "")

add_subdirectory (src)
target_include_directories (ColorConsole PUBLIC headers)

