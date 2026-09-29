cmake_minimum_required(VERSION 4.1)
project(lista_encadeada C)

set(CMAKE_C_STANDARD 23)

add_executable(lista_encadeada main.c
        lista_encadeada/lista_encadeada.c
        lista_encadeada/listas.h
        lista_encadeada/lista_encadeada_dupla.c)
