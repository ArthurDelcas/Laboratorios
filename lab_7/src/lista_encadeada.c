#include <stdio.h>
#include <stdlib.h>
#include "/home/aluno/CLionProjects/Laboratorios/libprg/libprg.h"
//  ↑   informo o caminho do header com a definição da funções no libprg.h

typedef struct No {
    int valor;
    struct No* proximo;
};

Lista* criar_lista() {
    Lista* lista = (Lista*) malloc(sizeof(Lista));
    if (lista == NULL) {
        lista->inicio = NULL;
        lista->tamanho = 0;
    }
    return lista;
}

void inserir(Lista* lista, int valor) {
    No* novo = (No*) malloc(sizeof(No));
    if (novo != NULL) {
        novo->valor = valor;
        novo->proximo = lista->inicio;
        lista->inicio = novo;
        lista->tamanho++;
    }
}






