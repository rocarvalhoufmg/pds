#include <stdio.h>
#include "contador.h"

int main() {
    Contador *meu_contador = criar_contador(5); // Cria um contador com limite 5
    incrementar(meu_contador);
    incrementar(meu_contador);
    printf("Valor do contador: %d\n", obter_valor(meu_contador));
    decrementar(meu_contador);
    printf("Valor do contador: %d\n", obter_valor(meu_contador));
    
    destruir_contador(meu_contador); // Libera a memória alocada para o contador

    //impossivel acessar diretamente a estrutura do contador
    //meu_contador->limite = 0;
    return 0;
}