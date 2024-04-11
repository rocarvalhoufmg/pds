#include "pessoa.hpp"

Pessoa::Pessoa()
{
    this->nome = "";
    this->cpf = "000000000-00";
}

Pessoa::Pessoa(string nome){
    this->nome = nome;
    this->cpf = "000000000-00";
}

Pessoa::Pessoa(string nome, string cpf):
    nome(nome), cpf(cpf)
{

}

string Pessoa::paraTexto()
{
    return nome + "\t" + cpf;
}

bool Pessoa::validarCPF(){
    return true;
}