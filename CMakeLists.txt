cmake_minimum_required(VERSION 3.10)

project(BENES)

find_package(SDL3 CONFIG REQUIRED)

add_executable(test test/cycle_test.c)

add_executable(BENES src/BENES.c)

target_link_libraries(BENES PRIVATE SDL3::SDL3)
target_link_libraries(test PRIVATE SDL3::SDL3)
