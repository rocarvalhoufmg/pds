#ifndef ALUNO
#define ALUNO

#include <string>
#include "Pessoa.hpp"

using std::string;

class Aluno : public Pessoa
{
    private:
        string matricula;
    
    public:
        Aluno(string nome, string cpf, string matricula);
        string pegarDados();
};

#endif