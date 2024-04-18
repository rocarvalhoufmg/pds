#ifndef CORRENTISTA
#define CORRENTISTA

#include <iostream>
#include <string>

using std::string;

class Correntista
{
    private:
        string nome;
        string cpf;
    
    public:
        Correntista(string nome, string cpf);
        string pegarNome();
};
#endif