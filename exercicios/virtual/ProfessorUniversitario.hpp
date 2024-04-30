#ifndef PROFESSORUNI
#define PROFESSORUNI

#include <string>
#include "Professor.hpp"

class ProfessorUniversitario : public Professor{
    public:
        ProfessorUniversitario(std::string nome, std::string cpf, std::string ra);
        std::string GetDados() override;

    protected:
        std::string ra;
};

#endif