cmake_minimum_required(VERSION 3.17)

project(PracticeLLT CXX)

include_directories(/usr/local/include)

add_subdirectory(src)
add_subdirectory(test)

enable_testing()