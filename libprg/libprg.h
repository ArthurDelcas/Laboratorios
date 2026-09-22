#ifndef LIBPRG_LIBPRG_H
#define LIBPRG_LIBPRG_H

typedef struct No {
    int valor;
    struct No *prox;
};

typedef struct {
    No *inicio;
    No tamanho;
} Lista;

Lista* cria_lista();
void inserir(Lista* lista, int valor);
void remover_numero(Lista* lista, int valor);
int obter_primeiro(Lista* lista);
void imprimir_lista(Lista* lista);
void destruir_lista(Lista* lista);

#endif // LIBPRG_LIBRARY_H