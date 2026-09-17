cmake_minimum_required(VERSION 4.1)
project(libprg C)

set(CMAKE_C_STANDARD 23)

add_library(libprg STATIC library.c
        lista/lista.c
        lista/lista.h)
