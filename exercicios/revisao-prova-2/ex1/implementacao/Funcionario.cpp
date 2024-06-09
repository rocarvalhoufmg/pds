
#include "../cabecalho/Funcionario.hpp"

Funcionario::Funcionario(int id, string nome, float salarioBase):
id(id), nome(nome), salarioBase(salarioBase)
{

}

Funcionario::Funcionario(){}

int Funcionario::getId()
{
    return id;
}

void Funcionario::setId(int id)
{
    this->id = id;
}

string Funcionario::getNome()
{
    return this->nome;
}

void Funcionario::setNome(string nome)
{
    this->nome = nome;
}

float Funcionario::getSalarioBase()
{
    return this->salarioBase;
}

void Funcionario::setSalarioBase(float salarioBase)
{
    this->salarioBase = salarioBase;
}