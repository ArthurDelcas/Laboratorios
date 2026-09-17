#include <stdio.h>
#include "src/libprg.h"

int main() {
    lista_linear_t* minha_lista = criar_lista_linear(10, false);
    int valor;

    printf("Digite 10 numeros inteiros para inserir na lista:\n");
    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &valor);
        inserir_na_lista(minha_lista, valor);
    }

    printf("\nPrimeiro elemento da lista: %d\n", inicio_lista_linear(minha_lista));
    printf("Tamanho da lista: %d\n", tamanho_lista_linear(minha_lista));

    printf("\nRemovendo 3 numeros da lista\n");
    remover_na_posicao_da_lista(minha_lista, 0);
    remover_na_posicao_da_lista(minha_lista, 0);
    remover_na_posicao_da_lista(minha_lista, 0);

    printf("\nNumeros restantes na lista:\n");
    listar_lista_linear(minha_lista);

    destruir_lista(minha_lista);
    printf("\nLista destruida com sucesso\n");

    return 0;
}