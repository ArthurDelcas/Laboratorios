#ifndef LIBPRG_FILA_H
#define LIBPRG_FILA_H

#define TAM_MAX 100

typedef struct {
    int dados [TAM_MAX];
    int inicio;
    int fim;
    int qtd;
} Fila;

void fila_inicializar(Fila *f);
int fila_vazia(Fila *f);
int fila_cheia(Fila *f);
int fila_enfileira(Fila *f, int valor);
int fila_desenfileira(Fila *f, int valor);

#endif //LIBPRG_FILA_H