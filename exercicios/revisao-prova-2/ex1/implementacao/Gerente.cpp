#include "Gerente.hpp"

Gerente::Gerente(int id, string nome, float salarioBase, float bonusAnual):Funcionario(id, nome, salarioBase)
{
    this->bonusAnual = bonusAnual;
}

Gerente::Gerente(){}

float Gerente::getSalarioBase()
{
    return Funcionario::getSalarioBase();
}

float Gerente::calcularSalarioTotal()
{
    return getSalarioBase() + bonusAnual;
}