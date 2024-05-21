#ifndef GERENTE
#define GERENTE
#include <string>
#include "Pessoa.hpp"
#include "Autenticavel.hpp"

class Gerente : public Pessoa, public Autenticavel
{
    private:
        string area;

    public: 
        Gerente(string nome, string cpf, string area, string senha);

};

#endif