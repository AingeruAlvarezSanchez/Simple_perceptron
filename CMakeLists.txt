cmake_minimum_required(VERSION 3.22)
project(Simple_perceptron
        VERSION 1.0
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)

file(GLOB_RECURSE SOURCES src/*cpp)

add_executable(Simple_perceptron ${SOURCES})

target_include_directories(Simple_perceptron PRIVATE
        include
)

target_compile_options(Simple_perceptron PRIVATE
        -Wall
        -Werror
        -Wextra
        -Wshadow
        -pedantic
)
