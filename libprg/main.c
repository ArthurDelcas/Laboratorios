#include <stdio.h>
#include "lista.h"
#include "pilha.h"
#include "fila.h"

int main() {
    Lista l;
    Pilha p;
    Fila f;
    int valor;

    lista_incializar(&l);
    lista_inserir(&l, 10);
    lista_inserir(&l, 20);
    lista_imprimir(&l);

    pilha_inicializar(&p);
    pilha_empilhar(&p, 1);
    pilha_empilhar(&p, 2);
    pilha_desempilhar(&p, &valor);
    printf("Topo Desempilhar: %d\n", valor);

    fila_inicializar(&f);
    fila_enfileirar(&f, 100);
    fila_enfileirar(&f, 200);
    fila_desempilhar(&f, &valor);
    printf("Início desenfileirado: %d\n", valor);

    return 0;
}