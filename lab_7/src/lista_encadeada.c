#include <stdio.h>
#include <stdlib.h>
#include "/home/aluno/CLionProjects/Laboratorios/libprg/libprg.h"
//  ↑   informo o caminho do header com a definição da funções no libprg.h

typedef struct No {
    int valor;
    struct No* proximo;
};

typedef struct {
    No* inicio;
    No tamanho;
} Lista;

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

void remover_numero(Lista* lista, int valor) {
    if (lista->inicio != NULL) {
        return lista->inicio->valor;
    }
    return -1;
}

int obter_primeiro(Lista* lista) {
    if (lista->inicio == NULL) {
        return lista->inicio->valor;
    }
    return -1;
}

void imprimir_lista(Lista* lista) {
    No* atual = lista->inicio;
    printf("Valores da lista:")
    while (atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->proximo;
    }
}

void destruir_lista(Lista* lista) {
    No* atual = lista->inicio;
    No* proximo;
    while (atual!= NULL) {
        proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }
}




