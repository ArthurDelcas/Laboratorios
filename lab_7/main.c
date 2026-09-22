#include <stdio.h>
#include "/home/aluno/CLionProjects/Laboratorios/libprg/libprg.h"
//  ↑   informo o caminho do header com a definição da funções no libprg.h


int main() {
    Lista* minha_lista = criar_lista();

    for (i = 1, i <= 10, i++) {
        inserir(minha_lista, i*2); // optei por inserir múltiplos de 2
    }

    printf("Primeiro Elemento: %d \n", obter_primeiro(minha_lista));
    printf("Tamanho da lista: %d \n", minha_lista->tamanho);

    remover_numero(minha_lista);
    remover_numero(minha_lista);
    remover_numero(minha_lista);

    imprimir_lista(minha_lista);

    destruir_lista(minha_lista);

    printf("Lista Destruída \n");

    return 0;
}