
#include <iostream>
#include "Pessoa.hpp"
#include "Professor.hpp"
#include "ProfessorUniversitario.hpp"
using std::cout;
using std::endl;

int main()
{
    Pessoa *p;

    Pessoa p1("Rodrigo");
    Professor p2("Jose","CPF JOSE");
    ProfessorUniversitario p3("Caio", "CPF CAIO", "RA CAIO");

    p = &p1;
    cout << p->GetDados() << endl;

    p = &p2;
    cout << p->GetDados() << endl;

    p = &p3;
    cout << p->GetDados() << endl;

    cout << "\n------------------------------------------------------\n";

    Professor pn;
    //pn = p1;
    //cout << pn.GetDados() << endl;
    pn = p2;
    cout << pn.GetDados() << endl;
    pn = p3;
    cout << pn.GetDados() << endl;
}