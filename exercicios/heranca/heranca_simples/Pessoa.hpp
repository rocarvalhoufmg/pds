#ifndef PESSOA
#define PESSOA

#include <string>
using std::string;
class Pessoa
{
    private:
        string nome;
        string cpf;
    
    protected: 
        string rg;

    public:
        Pessoa(string nome, string cpf);
        virtual string pegarDados();

};

#endif