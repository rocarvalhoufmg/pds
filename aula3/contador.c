#include "contador.h"
#include <stdlib.h>

// Definição real da estrutura Contador
struct Contador {
    int valor;
    int limite;
};

// Implementação das funções que operam na estrutura Contador

/*A seta (->) é usada quando trabalhamos com ponteiros para estruturas, 
enquanto o ponto (.) é usado quando temos uma variável direta*/
Contador* criar_contador(int limite) {
    Contador *c = malloc(sizeof(Contador));
    c->valor = 0;
    c->limite = limite;
    return c;
}

void incrementar(Contador *c) {
    if (c->valor < c->limite) {
        ++c->valor;
    }
}

void decrementar(Contador *c) {
    if (c->valor > 0) {
        --c->valor;
    }
}

int obter_valor(Contador *c) {
    return c->valor;
}

void destruir_contador(Contador *c) {
    free(c);
}