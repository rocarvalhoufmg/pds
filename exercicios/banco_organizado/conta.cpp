#include <string>
#include "conta.hpp"

Conta::Conta(Correntista correntista, int numero):
    correntista(correntista), numero(numero)
{

}

int Conta::pegarNumeroConta()
{
    return this->numero;
}

void Conta::depositar(float saldo)
{
    this->saldo += saldo;
}

bool Conta::sacar(float valor)
{
    if(this->saldo > valor){
        this->saldo -= valor;
        return true;
    }

    return false;
}

float Conta::pegarSaldo()
{
    return this->saldo;
}