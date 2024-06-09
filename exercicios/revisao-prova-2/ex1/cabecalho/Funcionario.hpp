#ifndef FUNCIONARIO 
#define FUNCIONARIO

#include <string>

using std::string;

class Funcionario
{
    private:
        int id;
        string nome;
        float salarioBase;
    protected:
        virtual float getSalarioBase();
    public:
        Funcionario();
        Funcionario(int id, string nome, float salarioBase);
        int getId();
        void setId(int id);
        string getNome();
        void setNome(string nome);
        void setSalarioBase(float salarioBase);
        virtual float calcularSalarioTotal() = 0;
};

#endif