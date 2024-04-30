#include "ProfessorUniversitario.hpp"

ProfessorUniversitario::ProfessorUniversitario(std::string nome, std::string cpf, std::string ra)
:Professor(nome, cpf), ra(ra)
{

}


std::string ProfessorUniversitario::GetDados()
{
    return nome + "\t" + cpf + "\t" + ra;
}