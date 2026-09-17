#ifndef LAB_5_EXERCICIOS_H
#define LAB_5_EXERCICIOS_H

#include <stdbool.h>

typedef struct fila {
    int* elementos;
    int capacidade;
    int tamanho;
    int inicio;
    int fim;
} fila_t;

fila_t* criar_fila(int capacidade);
void enfileirar(fila_t* f, int valor);
void desenfileirar(fila_t* f);
int inicio_fila(fila_t* f);
int fim_fila(fila_t* f);
int tamanho_fila(fila_t* f);
bool fila_cheia(fila_t* f);
bool fila_vazia(fila_t* f);
void listar_fila(fila_t* f);
void destruir_fila(fila_t* f);


#endif //LAB_5_EXERCICIOS_H