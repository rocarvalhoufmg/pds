#include <iostream>
#include "exemplo.hpp"


Pessoa::Pessoa(std::string nome)
{
    this->nome = nome;
}

std::string Pessoa::GetNome()
{
    return this->nome;
}

void Pessoa::SetNome(std::string nome)
{
    this->nome = nome;
}

Pessoa::~Pessoa()
{
    std::cout << "Objeto Pessoa Destruído" << std::endl;
}