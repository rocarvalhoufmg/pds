#include <stdio.h>
#include "arvore.h"

int main(){
    Arvore* arvore = arvore_cria();
    arvore_inserir(arvore, 10);
    arvore_inserir(arvore, 0);
    arvore_inserir(arvore, 20);
    arvore_inserir(arvore, 5);
    arvore_inserir(arvore, 25);
    printf("%d\n", arvore_busca(arvore, 0));
    printf("%d\n", arvore_busca(arvore, 10));
    printf("%d\n", arvore_busca(arvore, 15));
    printf("%d\n", arvore_busca(arvore, 25));
}