#include <stdlib.h>
#include <stdio.h>

int troca(int* a, int* b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
    int a = 3;
    int b = 10;
    troca(&a, &b);
    printf("%d - %d", a, b);
}