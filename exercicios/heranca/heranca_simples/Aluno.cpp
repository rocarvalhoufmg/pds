#include "Aluno.hpp"

Aluno::Aluno(string nome, string cpf, string matricula):matricula(matricula), Pessoa(nome, cpf)
{

}

string Aluno::pegarDados()
{
    return Pessoa::pegarDados() +  "\t" + matricula;
}