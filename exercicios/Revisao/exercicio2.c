#include <stdlib.h>
#include <stdio.h>

int divisivel(int numerador, int denominador){
    return numerador % denominador;
}

int main(){
    int numero, soma = 0;
    scanf("%d", &numero);
    
    for(int i = 0; i <= numero; i++){
        soma += i;
    }

    printf("Soma = %d \n", soma);
    soma = 0;
    int contador = 0;
    while(contador <= numero){
        soma+=contador;
        contador++;
    }
    printf("Soma = %d \n", soma);
}