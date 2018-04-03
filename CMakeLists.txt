cmake_minimum_required(VERSION 3.9)
project(int128Test C)

set(CMAKE_C_STANDARD 11)

add_executable(int128Test main.c int128.c int128.h)