//
// Created by aluno on 17/09/2026.
//

#ifndef LIBPRG_PILHA_H
#define LIBPRG_PILHA_H

#define TAM_MAX 100

typedef struct {
    int dados [TAM_MAX];
    int topo;
} Pilha;

void pilha_inicializar(Pilha *p);
int pilha_vazia(Pilha *p);
int pilha_cheia(Pilha *p);
int pilha_empilhar(Pilha *p, int valor);
int pilha_desempilhar(Pilha *p, int valor);

#endif //LIBPRG_PILHA_H