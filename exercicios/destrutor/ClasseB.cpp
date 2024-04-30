#include <iostream>
#include "ClasseB.hpp"

using std::cout;

ClasseB::ClasseB(int atributo1, int atributo2)
:ClasseA(atributo1)
{
    this->atributo2 = atributo2;
}

ClasseB::~ClasseB()
{
    cout << "Destrutor classe B";
}