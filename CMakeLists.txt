cmake_minimum_required(VERSION 3.16)
project(ex1-sort)

include_directories(include)

add_library(sort src/mergesort.cpp src/insertionsort.cpp)

add_subdirectory(tests)
enable_testing()
add_test(NAME test1 COMMAND test1)
add_test(NAME test2 COMMAND test2)
add_test(NAME test3 COMMAND test3)
add_test(NAME test4 COMMAND test4)
