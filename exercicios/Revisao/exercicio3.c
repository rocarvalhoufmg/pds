#include <stdlib.h>
#include <stdio.h>

int maior(int vetor[], int tamanho){
    int maior = vetor[0];
    for(int i = 1; i < tamanho; i++){
        if(maior < vetor[i]){
            maior = vetor[i];
        }
    }
    return maior;
}

int main(){
    int vetor[] = {1, 1000, 20, 1, 20, 4, 100};
    printf("O maior valor e %d", maior(vetor, 7));
}
