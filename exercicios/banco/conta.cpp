#include "conta.hpp"
#include <iostream>

/*
O comando float Conta::obterSaldo() é uma declaração de função em C++. 

Vamos descrevê-la:

float: O tipo de dado de retorno da função é float, que representa um número 
de ponto flutuante (ou seja, um número decimal com casas decimais).

Conta::obterSaldo(): Isso indica que a função obterSaldo() pertence à classe Conta. 
A notação Conta:: especifica o escopo da classe à qual a função pertence. 
Portanto, essa função faz parte da implementação da classe Conta.
*/
int Conta::banco = 0;

Conta::Conta(string nomeTitular, int numeroConta, float saldo)
{
    this->nomeTitular = nomeTitular;
    this->numeroConta = numeroConta;
    this->saldo = saldo;
}

Conta::Conta(string nomeTitular, int numeroConta)
:nomeTitular(nomeTitular), numeroConta(numeroConta), saldo(0)
{

}

Conta::Conta()
{

}

float Conta::obterSaldo()
{
    return saldo;
}

string Conta::obterTitular()
{
    return nomeTitular;
}

string Conta::paraTexto()
{
    return "Nome: " + nomeTitular + " Conta: " + std::to_string(numeroConta) + " " + std::to_string(saldo);
}

void Conta::configurarSaldo(float saldo)
{
    this->saldo = saldo;
}

void Conta::configurarTitular(string nomeTitular)
{
    this->nomeTitular = nomeTitular;
}

void Conta::configurarNumeroConta(int numeroConta)
{
    this->numeroConta = numeroConta;
}

void Conta::testarDestrutor()
{
    Conta c;
}

Conta::~Conta()
{
    std::cout << "Destruindo objeto" << std::endl;
}
