
#include <iostream>
#include "Pessoa.hpp"

Pessoa::Pessoa(std::string nome)
:nome(nome)
{

}

Pessoa::Pessoa(){}


std::string Pessoa::GetDados()
{
    return nome;
}