#include <stdlib.h>
#include <stdio.h>

void main(){
    int* p;
    p = malloc(sizeof *p);
    scanf("%d",p);

    int* p2;
    p2 = malloc(sizeof(int));
    scanf("%d",p2);

    printf("Soma = %d\n", *p + *p2);

    int* v;
    v = malloc(3 * sizeof(int));
    for(int i = 0; i < 3; i++){
        scanf("%d", &v[i]);
    }

    for(int i = 0; i < 3; i++){
        printf("\n %d ", v[i]);
    }

}