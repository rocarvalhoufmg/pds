#include <iostream>
#include "banco.hpp"

using std::cout;
using std::endl;

int Banco::quantidadeContas = 0;

void Banco::addConta(Conta conta)
{
    this->contas.push_back(conta);
    quantidadeContas++;
}

void Banco::verContas()
{
    for(auto& conta : contas)
    {
        cout << conta.pegarNumeroConta() << endl;
    }    
}  

int Banco::pegarQuantidadeContas()
{
    return quantidadeContas;
}

void Banco::increntarContas()
{
    quantidadeContas++;
}

void Banco::decrementarContas()
{
    quantidadeContas--;
}