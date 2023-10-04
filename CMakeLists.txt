cmake_minimum_required (VERSION 3.8 FATAL_ERROR)

project (ColorConsole)

if (NOT TARGET ColorConsole)

add_library (ColorConsole STATIC src/ColorConsole.cpp headers/ColorConsole.h)
target_include_directories(ColorConsole PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/headers)

endif ()
