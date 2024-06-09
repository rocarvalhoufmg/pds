#ifndef ESTAGIARIO 
#define ESTAGIARIO

#include <string>
#include "Funcionario.hpp"

using std::string;

class Estagiario : public Funcionario
{

    private:
        float salarioFixo;

    public:
        Estagiario();
        Estagiario(int id, string nome, float salarioBase, float salarioFixo);
        float calcularSalarioTotal() override;

};

#endif