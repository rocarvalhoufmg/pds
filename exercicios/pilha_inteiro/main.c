#include "pilha.h"
#include<stdio.h>

int main(){
    Pilha* pilha = pilha_cria();
    int valor;


    pilha_push(pilha, 1);
    pilha_push(pilha, 2);
    pilha_push(pilha, 3);
    
    valor = pilha_pop(pilha);
    printf("RETIRADO = %d \n", valor);
    
    pilha_push(pilha, 3);
    
    valor = pilha_pop(pilha);
    printf("RETIRADO = %d \n", valor);
    
    valor = pilha_pop(pilha);
    printf("RETIRADO = %d \n", valor);
    
    valor = pilha_pop(pilha);
    printf("RETIRADO = %d \n", valor);
    
    valor = pilha_pop(pilha);
    printf("RETIRADO = %d \n", valor);
    
    pilha_push(pilha, 1);
    pilha_push(pilha, 20);
    imprime(pilha);
}