#include <stdio.h>
#include "ponto.h"

int main(){
    Ponto p1 = criar_ponto(10, 1.5);
    Ponto p2 = criar_ponto(4.2, 3);
    printf("x = %f y = %f", p1.x, p1.y);
    double distancia = calcular_distancia(p1, p2);
    printf("Distancia entre os pontos = %f", distancia);
}