#include <iostream>
#include <vector>
#include "Aluno.hpp"
#include "Pessoa.hpp"
#include "Professor.hpp"
#include "TecnicoAdministrativo.hpp"

using std::cout;
using std::endl;
using std::vector;


int main()
{
    Pessoa pessoa("Rodrigo","CPF");
    Aluno aluno("Jose","CPF","MATRICULA");
    Professor professor("Maria","CPF","FORMACAO");
    TecnicoAdministrativo ta("Tecnico", "CPF");

    cout << pessoa.pegarDados() << endl;
    cout << aluno.pegarDados() << endl;
    cout << professor.pegarDados() << endl;
    cout << ta.pegarDados() << endl;

    cout << endl << "--------------------" << endl;

    vector<Pessoa*> pessoas;
    pessoas.push_back(&pessoa);
    pessoas.push_back(&aluno);
    pessoas.push_back(&professor);
    pessoas.push_back(&ta);

    for(auto p : pessoas)
    {
        cout << p->pegarDados() << endl;
    } 
    return 0;
}