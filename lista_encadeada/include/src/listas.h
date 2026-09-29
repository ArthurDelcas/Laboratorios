#ifndef LISTA_ENCADEADA_LISTA_ENCADEADA_H
#define LISTA_ENCADEADA_LISTA_ENCADEADA_H

// Lista Encadeada

typedef struct no no_t;

no_t* criar_lista_encadeada(int valor);
void adicionar_na_lista_encadeada(no_t** inicio, int valor);
int primeiro_elemento_lista_encadeada(no_t** inicio);
no_t* primeiro_no_lista_encadeada(no_t** inicio);
no_t* buscar_na_lista_encadeada(no_t** inicio, int valor);
void listar_lista_encadeada(no_t **inicio);
void remover_da_lista_encadeada(no_t** inicio, int valor);
void destruir_lista_encadeada(no_t** inicio);
no_t* criar_lista_encadeada_circular(int valor);
void adicionar_na_lista_encadeada_circular(no_t** inicio, int valor);
void destruir_lista_encadeada_circular(no_t **inicio);
void adicionar_na_posicao_da_lista_encadeada(no_t** inicio, int valor, int posicao);
int tamanho_da_lista_encadeada(no_t* inicio);
int limitar_na_lista_encadeada(no_t** inicio, int posicao);
bool lista_encadeada_vazia(no_t** inicio);
no_t* buscar_na_posicao_da_lista_encadeada(no_t** inicio, int posicao);
void remover_da_posicao_da_lista_encadeada(no_t** inicio, int posicao);
int tamanho_da_lista_encadeada_circular(no_t* inicio);
void adicionar_na_posicao_da_lista_encadeada_circular(no_t** inicio, int valor, int posicao);
no_t* ultimo_no_da_lista_encadeada_circular(no_t* inicio);


// Lista Duplamente Encadeada

typedef struct no_duplo no_duplo_t;

no_duplo_t* criar_lista_encadeada_dupla(int valor);
void adicionar_na_lista_encadeada_dupla(no_duplo_t **inicio, int valor);
no_duplo_t* buscar_na_lista_encadeada_dupla(no_duplo_t** inicio, int valor);
void remover_da_lista_encadeada_dupla(no_duplo_t** inicio, int valor);
void adicionar_na_posicao_da_lista_encadeada_dupla(no_duplo_t** inicio, int valor, int posicao);
void remover_da_posicao_da_lista_encadeada_dupla(no_duplo_t** inicio, int posicao);
no_duplo_t* buscar_na_posicao_da_lista_encadeada_dupla(no_duplo_t** inicio, int posicao);
int tamanho_da_lista_encadeada_dupla(no_duplo_t* inicio);

#endif