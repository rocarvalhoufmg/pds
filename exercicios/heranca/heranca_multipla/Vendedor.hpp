#ifndef VENDEDOR
#define VENDEDOR
#include <string>
#include "Pessoa.hpp"
class Vendedor : public Pessoa
{
    private:
        string produto;

    public: 
        Vendedor(string nome, string cpf, string area);
        
};

#endif