#ifndef PESSOA
#define PESSOA
#include <string>

using std::string;
class Pessoa
{
    private:
        string cpf;
        string nome;

    public:
        Pessoa(string cpf, string nome);
};
#endif