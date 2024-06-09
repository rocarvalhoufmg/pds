
#include "../cabecalho/FuncionarioRegular.hpp"

FuncionarioRegular::FuncionarioRegular(int id, string nome, float salarioBase):
Funcionario(id,nome,salarioBase)
{

}

FuncionarioRegular::FuncionarioRegular(){}

float FuncionarioRegular::calcularSalarioTotal()
{
    return getSalarioBase();
}

