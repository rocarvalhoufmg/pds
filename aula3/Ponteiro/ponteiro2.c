#include <stdio.h>

void main(){
    int array[3] = {10, 20, 30};

    //Os arrays em C são tratados como ponteiros para o primeiro elemento.
    int *ponteiro = array;

    for(int i = 0; i<3; i++){
        printf("%d ", array[i]);
    }

    printf("\n");

    /*Voce pode usar aritmetica de ponteiros para percorrer um array.    
    Por exemplo, ponteiro + 1 aponta para o proximo elemento.*/
    for(int i = 0; i<3; i++){
        printf("%d ", *ponteiro);
        ponteiro = ponteiro + 1;
    }

}