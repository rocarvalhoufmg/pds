#include <stdlib.h>
#include <stdio.h>

typedef struct No{
    struct No* proximo;
    int valor;
}No;

typedef struct{
    No* inicio;
    No* fim;
}Fila;

Fila* fila_cria(){
    Fila* fila = malloc(sizeof(Fila));
    fila->inicio = NULL;
    fila->fim = NULL;
    return fila;
}

int fila_retira(Fila* fila){
    if(fila->inicio == NULL){
        return -999999;
    }

    int valor = fila->inicio->valor;
    No* no = fila->inicio->proximo;
    free(fila->inicio);
    fila->inicio = no;
    if (fila->inicio == NULL)
        fila->fim = NULL;
    return valor;
}

void fila_insere(Fila* fila, int x){
    No* no = malloc(sizeof(No));
    
    no->valor = x;
    no->proximo = NULL;
    
    if(fila->inicio == NULL)
        fila->inicio = no;
    
    if(fila->fim != NULL)    
        fila->fim->proximo = no;
    
    fila->fim = no;
}

void fila_libera(Fila* fila){
    free(fila);
}

void imprime_no(No* no){
    if(no!=NULL){
        printf("%d ", no->valor);
        imprime_no(no->proximo);
    }
}

void fila_imprime(Fila* fila){
    imprime_no(fila->inicio);
}

