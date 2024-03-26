#include <stdlib.h>
#include <stdio.h>

int divisivel(int numerador, int denominador){
    return numerador % denominador;
}

int main(){
    int numero;
    scanf("%d", &numero);
    if (divisivel(numero, 5) == 0 && divisivel(numero, 11) == 0){
       printf("O numero %d e divisivel por 5 e 11", numero); 
    }else{
       printf("O numero %d nao e divisivel por 5 e 11", numero); 
    }
}