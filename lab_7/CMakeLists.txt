cmake_minimum_required(VERSION 4.1)
project(lab_7 C)

set(CMAKE_C_STANDARD 23)

include(FetchContent)

FetchContent_Declare(
        libprg
        GIT_REPOSITORY https://github.com/ArthurDelcas/libprg.git
        GIT_TAG origin/main
)
FetchContent_MakeAvailable(libprg)

add_executable(lab_7 main.c
        src/lista_encadeada.c
        /home/aluno/CLionProjects/Laboratorios/libprg/libprg.h
)
