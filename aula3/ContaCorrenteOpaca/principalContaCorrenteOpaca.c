#include "ContaCorrenteOpaca.h"
#include <stdio.h>

void main(){
    ContaCorrenteOpaca *c1;
    c1 = criar_conta(10, 20);

    double valorSaque = 100;
    if (haSaldoSuficiente(c1, valorSaque) == 1){
        saque_conta(c1, valorSaque);
        printf("Obrigado!");
    }else{
        printf("Nao ha saldo disponivel");
    }

 
    //c1->saldo = c1->saldo - valorSaque;
    //printf("\nValor retirado da conta indevidamente");

}