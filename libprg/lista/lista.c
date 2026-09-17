#include <stdio.h>
#include "lista.h"

void lista_inicializar(Lista *l) {
    l->tamanho = 0;
}

int lista_inserir(Lista *l, int valor) {
    if(l->tamanho >= TAM_MAX) return 0;
    l->dados[l->tamanho] = valor;
    l->tamanho++;
    return 1;
}

int lista_remover(Lista *l, int valor) {
    int pos = lista_buscar(l, valor);
    if(pos == -1) return 0;
    for (int i = pos; i < l->tamanho - 1; i++)
        l->dados[i] = l->dados[i + 1];
    l->tamanho--;
    return 1;
}