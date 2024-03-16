#include<stdlib.h>
#include<stdio.h>

int main(){
    int *x;
    x = malloc(sizeof(int));

    if(x!=NULL){
        printf("Alocado!");
    }else{
        printf("Erro ao alocar memoria");
        return -1;
    }

    *x = 5;
    printf("Conteudo = %d\n\n",*x);

    /*-----------------------------------------------------------------*/

    /*
        Quando usamos malloc para alocar memória para um vetor (ou matriz), o 
        ponteiro retornado aponta para o primeiro elemento desse vetor.
    */
    int *vetor;
    vetor = malloc(sizeof(int)* *x);
    for (int i = 0; i < *x; i++){
        vetor[i] = 0;
    }

    for(int j = 0; j < *x; j++){
        printf(" %d ", vetor[j]);
    }


    free(vetor);


    for(int j = 0; j < *x; j++){
        printf(" %d ", vetor[j]);
    }
}