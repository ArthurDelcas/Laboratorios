#include <stdio.h>
#include <stdlib.h>
#include "exercicios.h"

int main() {
    // Instancia a fila com capacidade para 10 elementos
    fila_t* minha_fila = criar_fila(10);
    int valor;

    // Insere dez numeros inteiros na fila
    printf("Digite 10 numeros inteiros para inserir na fila:\n");
    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &valor);
        enfileirar(minha_fila, valor);
    }

    // Imprime o inicio e o fim da fila
    printf("\nInicio da fila: %d\n", inicio_fila(minha_fila));
    printf("Fim da fila: %d\n", fim_fila(minha_fila));

    // Remove tres números da fila
    printf("\nRemovendo 3 numeros da fila...\n");
    desenfileirar(minha_fila);
    desenfileirar(minha_fila);
    desenfileirar(minha_fila);

    // Imprime todos os numeros restantes da fila
    printf("\nNumeros restantes na fila:\n");
    listar_fila(minha_fila);

    // Destroi a fila
    destruir_fila(minha_fila);
    printf("\nFila destruida com sucesso e memoria liberada.\n");

    return 0;
}