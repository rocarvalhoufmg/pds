#include <stdlib.h>
#include "ContaCorrente.h"

ContaCorrente criar_conta(int numero, int cpf){
    ContaCorrente conta;
    conta.cpf = cpf;
    conta.numero = numero;
    conta.saldo = 0;
    return conta;
}

int haSaldoSuficiente(ContaCorrente conta, double valor){
    if (conta.saldo > valor){
        return 1;
    }
    return 0;
}

ContaCorrente saque_conta(ContaCorrente conta, double valor){
    if (conta.saldo > valor){
        conta.saldo = conta.saldo - valor;
    }
    return conta;
}

ContaCorrente deposito_conta(ContaCorrente conta, double valor){
    conta.saldo = conta.saldo + valor;
    return conta;
}