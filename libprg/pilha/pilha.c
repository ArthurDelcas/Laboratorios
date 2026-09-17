#include "pilha.h"

void pilha_inicializar(Pilha *p) {
    p->topo = -1;
}

int pilha_vazia(Pilha *p) {
    return p->topo == -1;
}

int pilha_cheia(Pilha *p) {
    return p->topo == TAM_MAX - 1;
}

int pilha_empilhar(Pilha *p, int valor) {
    if (pilha_cheia(p)) return 0;
    p->topo++;
    p->dados[p->topo] = valor;
    return 1;
}

int pilha_desempilhar(Pilha *p, int valor) {
    if (pilha_vazia(p)) return 0;
    valor = p->dados[p->topo];
    p->topo--;
    return 1;
}