cmake_minimum_required(VERSION 4.1)
project(include C)

set(CMAKE_C_STANDARD 23)

add_executable(lista_encadeada main.c
        include/src/lista_encadeada.c
        include/src/listas.h
        include/src/lista_encadeada_dupla.c)
