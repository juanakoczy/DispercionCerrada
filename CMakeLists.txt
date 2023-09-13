cmake_minimum_required(VERSION 3.24)
project(DispercionCerrada C)

set(CMAKE_C_STANDARD 11)

add_executable(DispercionCerrada main.c hash.h hash.c)
