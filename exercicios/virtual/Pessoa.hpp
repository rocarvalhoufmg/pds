#ifndef PESSOA
#define PESSOA

#include <string>
class Pessoa {
    public:
        Pessoa();
        Pessoa(std::string nome);
        virtual std::string GetDados();

    protected:
        std::string nome;
};

#endif