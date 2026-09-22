//
// Created by aluno on 22/09/2026.
//

#include "fila.h"

void fila_inicializar(Fila *f) {
    f->inicio = 0;
    f->fim = 0;
    f->qtd = 0;
}

int fila_vazia(Fila *f) {
    return f->qtd == 0;
}

int fila_cheia(Fila *f) {
    return f->qtd == TAM_MAX;
}

int fila_enfileira(Fila *f, int valor) {
    if (fila_cheia(f)) return 0;
    f->dados[f->fim] = valor;
    f->fim = (f->fim + 1) % TAM_MAX;
    f->qtd++;
    return 1;
}

int fila_desenfileira(Fila *f, int valor) {
    if (fila_vazia(f)) return 0;
    *valor = f->dados[f->inicio];
    f->inicio = (f->inicio + 1) % TAM_MAX;
    f->qtd--;
    return 1;
}