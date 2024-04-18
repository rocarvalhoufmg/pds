#include "Professor.hpp"

Professor::Professor(string nome, string cpf, string formacao):
    formacao(formacao),Pessoa(nome,cpf)
{

}

string Professor::pegarDados()  
{
    return Pessoa::pegarDados() + "\t" + formacao;
}