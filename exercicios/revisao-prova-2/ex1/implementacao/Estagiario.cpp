#include "../cabecalho/Estagiario.hpp"
#include <exception>
#include <stdexcept>
Estagiario::Estagiario(int id, string nome, float salarioBase, float salarioFixo):Funcionario(id, nome, salarioBase)
{
    if(salarioBase < salarioFixo)
        throw std::runtime_error("Salario Fixo não pode ser mair que salario base");
    this->salarioFixo = salarioFixo;
}

Estagiario::Estagiario(){}

float Estagiario::calcularSalarioTotal()
{
    return salarioFixo;
}