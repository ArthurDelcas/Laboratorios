#ifndef LIBPRG_H
#define LIBPRG_H

#include <stdbool.h>

typedef struct lista_linear {
    int* elementos;
    int tamanho;
    int capacidade;
    bool ordenada;
} lista_linear_t;

lista_linear_t* criar_lista_linear(int capacidade, bool ordenada);
bool lista_cheia(lista_linear_t* ll);
bool lista_vazia(lista_linear_t* ll);
void inserir_na_lista(lista_linear_t* ll, int valor);
int buscar_na_lista(lista_linear_t* ll, int valor);
void remover_da_lista(lista_linear_t* ll, int valor);
int tamanho_lista_linear(lista_linear_t* ll);
void listar_lista_linear(lista_linear_t* ll);
int inicio_lista_linear(lista_linear_t* ll);
int buscar_na_posicao_da_lista(lista_linear_t* ll, int posicao);
void inserir_na_posicao_da_lista(lista_linear_t* ll, int valor, int posicao);
void remover_na_posicao_da_lista(lista_linear_t* ll, int posicao);
void destruir_lista(lista_linear_t* ll);

#endif // LIBPRG_H