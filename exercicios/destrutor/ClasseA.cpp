

#include <iostream>
#include "ClasseA.hpp"

using std::cout;

ClasseA::ClasseA(int atributo1)
{
    this->atributo1 = atributo1;
}

ClasseA::~ClasseA()
{
    cout << "Destrutor classe A";
}

