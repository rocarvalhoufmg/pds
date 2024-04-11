
#include "correntista.hpp"

Correntista::Correntista(string nome, string cpf)
{
    this->nome = nome;
    this->cpf = cpf;
}

string Correntista::pegarNome()
{
    return this->nome;
}