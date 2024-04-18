#ifndef PESSOA
#define PESSOA

#include <string>
class Pessoa {
    public:
        ~Pessoa();
        Pessoa(const std::string nome);
        std::string GetNome();
        void SetNome(std::string nome);

    private:
        std::string nome;
};

#endif