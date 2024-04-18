#ifndef PROFESSOR
#define PROFESSOR

#include <string>
#include "Pessoa.hpp"
using std::string;

class Professor : public Pessoa
{
    private:
        string formacao;
    
    public:
        Professor(string nome, string cpf, string formacao);
        string pegarDados() override;
};

#endif