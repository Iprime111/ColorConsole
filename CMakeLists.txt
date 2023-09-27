cmake_minimum_required (VERSION 3.8 FATAL_ERROR)

project (ColorConsole)

add_library (ColorConsole src/ColorConsole.cpp)

target_include_directories (ColorConsole PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/headers)

