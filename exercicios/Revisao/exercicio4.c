#include <stdlib.h>
#include <stdio.h>

int naturais(int atual, int maximo){
    if (atual > maximo){
        return 0;
    }else{
        printf("%d ", atual);
        naturais(++atual, maximo);
    }
}

int main(){
    int a, b;
    printf("Defina o valor de a no intervalo (a,b)");
    scanf("%d", &a);
    printf("Defina o valor de a no intervalo (%d,b)", a);
    scanf("%d", &b);

    printf("Intervalo (%d,%d)",a,b);
    naturais(a,b);
}