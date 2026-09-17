cmake_minimum_required(VERSION 4.1)
project(lab_5 C)

set(CMAKE_C_STANDARD 17)

include(FetchContent)

FetchContent_Declare(
        libprg
        GIT_REPOSITORY https://github.com/ArthurDelcas/libprg.git
        GIT_TAG origin/main
)
FetchContent_MakeAvailable(libprg)

add_executable(lab_5
        main.c
        src/exercicios.c
        src/exercicios.h)


target_include_directories(lab_5 PRIVATE src) # dá o caminho para o CLion procurar o header dentro do src
target_link_libraries(lab_5 PUBLIC libprg) #linka a bibiloteca libprg