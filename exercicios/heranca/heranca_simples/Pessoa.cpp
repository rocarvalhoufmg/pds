#include "Pessoa.hpp"

Pessoa::Pessoa(string nome, string cpf):nome(nome),cpf(cpf)
{

}

string Pessoa::pegarDados()
{
    return nome + "\t" + cpf;
}