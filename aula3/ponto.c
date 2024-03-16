#include <stdio.h>
#include <math.h>
#include "ponto.h"

Ponto criar_ponto(double x, double y){
    Ponto p;
    p.x = x;
    p.y = y;
    return p;
}

double calcular_distancia(Ponto p1, Ponto p2){
    return sqrt( pow((p1.x-p2.x),2) + pow((p1.y - p2.y),2));
}