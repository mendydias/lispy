cmake_minimum_required(VERSION 3.20)

project(lispy VERSION 0.0.1 LANGUAGES C)

add_executable(lispy lispy.c)

add_subdirectory(includes\\wineditline)

target_link_libraries(lispy PUBLIC edit)

target_include_directories(lispy PUBLIC "${PROJECT_BINARY_DIR}")