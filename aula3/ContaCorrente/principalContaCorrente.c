#include "ContaCorrente.h"
#include <stdio.h>

void main(){
    ContaCorrente c1;
    c1 = criar_conta(10, 20);

    double valorSaque = 100;
    if (haSaldoSuficiente(c1, valorSaque) == 1){
        c1 = saque_conta(c1, valorSaque);
        printf("Obrigado!");
    }else{
        printf("Nao ha saldo disponivel");
    }

    printf("\nSALDO = %f", c1.saldo);
    c1.saldo = c1.saldo - valorSaque;

    printf("\nValor retirado da conta indevidamente");
    printf("\nSALDO = %f", c1.saldo);

}