#include <iostream>
#include <string>
#include "compartilhar.hpp"

using std::string;
using std::cout;
using std::endl;

int main()
{
    Compartilhar c1(10);
    Compartilhar c2(20);
    Compartilhar c3(30);
    cout << c1.pegarValor() << " " << c1.pegarCompartilhado() << endl;
    cout << c2.pegarValor() << " " << c2.pegarCompartilhado() << endl;
    cout << c3.pegarValor() << " " << c3.pegarCompartilhado() << endl;
    return 0;
}