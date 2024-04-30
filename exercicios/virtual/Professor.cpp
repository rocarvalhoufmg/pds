#include "Professor.hpp"

Professor::Professor(std::string nome, std::string cpf)
:Pessoa(nome), cpf(cpf)
{

}

Professor::Professor()
{

}

std::string Professor::GetDados()
{
    return nome + "\t" + cpf;
}