#include <vector>
#include <iostream>
#include "cabecalho/Estagiario.hpp"
#include "cabecalho/FuncionarioRegular.hpp"
#include "cabecalho/Gerente.hpp"

using std::vector;
using std::cout;
using std::endl;

int main()
{
    Funcionario* estagiario = new Estagiario(1, "Rodrigo", 1000, 500);
    Funcionario* func = new FuncionarioRegular(2, "Maria", 10000);
    Funcionario* gerente = new Gerente(3, "Joselita",10000, 2000);
    


    float st = gerente->calcularSalarioTotal();

    vector<Funcionario*> funcionarios;

    funcionarios.push_back(estagiario);
    funcionarios.push_back(func);
    funcionarios.push_back(gerente);

    for(auto funcionario : funcionarios)
    {
        cout << funcionario->getNome() << " " << funcionario->calcularSalarioTotal() << endl;
    }
}