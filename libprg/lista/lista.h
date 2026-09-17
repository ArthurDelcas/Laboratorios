//
// Created by aluno on 17/09/2026.
//

#ifndef LIBPRG_LISTA_H
#define LIBPRG_LISTA_H

#define TAM_MAX 100

typedef struct {
    int dados[TAM_MAX];
    int tamanho;
} Lista;

void lista_inicializar(Lista *l);
int lista_inserir(Lista *l, int valor);
int lista_remover(Lista *l, int valor);
int lista_buscar(Lista *l, int valor);
void lista_imprimir(Lista *l);

#endif //LIBPRG_LISTA_H