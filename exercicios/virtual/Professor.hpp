#ifndef PROFESSOR
#define PROFESSOR

#include <string>
#include "Pessoa.hpp"

class Professor : public Pessoa {
    public:
        Professor();
        Professor(std::string nome, std::string cpf);
        std::string GetDados() override;

    protected:
        std::string cpf;
};

#endif