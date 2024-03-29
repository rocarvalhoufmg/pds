#include "fila.h"
#include<stdio.h>

int main(){
    Fila* fila = fila_cria();
    fila_insere(fila, 10);
    fila_insere(fila, 20);
    fila_insere(fila, 30);
    fila_insere(fila, 40);
    fila_imprime(fila);

    fila_retira(fila);
    printf("\n");
    fila_imprime(fila);

    fila_retira(fila);
    printf("\n");
    fila_imprime(fila);

    fila_retira(fila);
    printf("\n");
    fila_imprime(fila);

    fila_retira(fila);
    printf("\n");
    fila_imprime(fila);

    fila_retira(fila);
    fila_insere(fila, 1000);
    fila_insere(fila, 1000);
    fila_insere(fila, 1000);
    printf("\n");
    fila_imprime(fila);
}