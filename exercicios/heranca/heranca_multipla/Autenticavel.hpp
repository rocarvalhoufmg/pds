#ifndef AUTENTICAVEL
#define AUTENTICAVEL
#include <string>
#include "Pessoa.hpp"
class Autenticavel 
{
    private:
        string senha;
    public: 
        Autenticavel(string senha);
        virtual bool autenticar(string senha) final;
        
};

#endif