#include "exercicios.h"
#include <stdio.h>
#include <stdlib.h>

fila_t* criar_fila(int capacidade) {
    fila_t* f = malloc(sizeof(fila_t));
    f->elementos = malloc(capacidade * sizeof(int));
    f->inicio = 0;
    f->tamanho = 0;
    f->fim = 0;
    f->capacidade = capacidade;
    return f;
}

bool fila_cheia(fila_t* f) {
    return f->tamanho == f->capacidade;
}

bool fila_vazia(fila_t* f) {
    return f->tamanho == 0;
}

void enfileirar(fila_t* f, int valor) {
    if (fila_cheia(f)) {
        exit(EXIT_FAILURE);
    }
    f->elementos[f->fim] = valor;
    f->fim++;
    f->tamanho++;
}

void desenfileirar(fila_t* f) {
    if (fila_vazia(f)) {
        exit(EXIT_FAILURE);
    }
    f->inicio++;
    f->tamanho--;
}

int inicio_fila(fila_t* f) {
    if (!fila_vazia(f)) {
        return f->elementos[f->inicio];
    }
    return -1;
}

int fim_fila(fila_t* f) {
    if (!fila_vazia(f)) {
        return f->elementos[f->fim - 1];
    }
    return -1;
}

int tamanho_fila(fila_t* f) {
    return f->tamanho;
}

void listar_fila(fila_t* f) {
    for (int i = f->inicio; i < f->fim; i++) {
        printf("%d ", f->elementos[i]);
    }
    printf("\n");
}

void destruir_fila(fila_t* f) {
    free(f->elementos);
    free(f);
}