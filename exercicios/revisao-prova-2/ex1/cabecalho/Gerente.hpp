#ifndef GERENTE 
#define GERENTE

#include <string>
#include "Funcionario.hpp"

using std::string;

class Gerente : public Funcionario
{

    private:
        float bonusAnual;

    public:
        Gerente();
        Gerente(int id, string nome, float salarioBase, float bonusAnual);
        virtual float calcularSalarioTotal() override;
        float getSalarioBase() override;

};

#endif