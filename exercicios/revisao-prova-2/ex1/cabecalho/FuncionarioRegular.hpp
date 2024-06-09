#ifndef FUNCIONARIOREGULAR
#define FUNCIONARIOREGULAR

#include <string>
#include "Funcionario.hpp"

using std::string;

class FuncionarioRegular : public Funcionario
{

    public:
        FuncionarioRegular();
        FuncionarioRegular(int id, string nome, float salarioBase);
        float calcularSalarioTotal() override;
};

#endif