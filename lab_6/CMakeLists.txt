cmake_minimum_required(VERSION 4.1)
project(lab_6 C)

set(CMAKE_C_STANDARD 23)

add_executable(lab_6 main.c
        src/lista_linear.c
        src/libprg.h)
