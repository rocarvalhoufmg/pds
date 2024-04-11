#include <iostream>
#include "pessoa.hpp"

int main()
{
    Pessoa p1;
    Pessoa p2("Rodrigo");
    Pessoa p3("Paula","999999999-00");

    std::cout << p1.paraTexto() << std::endl;
    std::cout << p2.paraTexto() << std::endl;
    std::cout << p3.paraTexto() << std::endl;

    return 0;
}