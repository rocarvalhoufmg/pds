#include <stdlib.h>
#include "ContaCorrenteOpaca.h"

struct ContaCorrenteOpaca{
    int numero;
    int cpf;
    double saldo;
};

ContaCorrenteOpaca* criar_conta(int numero, int cpf){
    ContaCorrenteOpaca *conta;
    conta->cpf = cpf;
    conta->numero = numero;
    conta->saldo = 0;
    return conta;
}

int haSaldoSuficiente(ContaCorrenteOpaca* conta, double valor){
    if (conta->saldo > valor){
        return 1;
    }
    return 0;
}

void saque_conta(ContaCorrenteOpaca* conta, double valor){
    if (conta->saldo > valor){
        conta->saldo = conta->saldo - valor;
    }
}

void deposito_conta(ContaCorrenteOpaca* conta, double valor){
    conta->saldo = conta->saldo + valor;
}