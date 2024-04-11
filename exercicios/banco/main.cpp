//headers pre compilados devem vir primeiro
#include <iostream>
#include "conta.hpp"

int main(){
    Conta conta;
    conta.configurarSaldo(10);
    std::cout <<  "=> " << conta.paraTexto() << std::endl;

    Conta contaNova("Rodrigo", 190019, 1000);
    std::cout <<  "=> " << contaNova.paraTexto() << std::endl;

    Conta outraConta("Joana", 897656);
    std::cout <<  "=> " << outraConta.paraTexto() << std::endl;

    Conta::banco = 123;
    std::cout <<  " ~ " << conta.paraTexto() << " " << conta.banco << std::endl;
    std::cout <<  " ~ " << outraConta.paraTexto() << " " << conta.banco << std::endl;
    std::cout << Conta::banco << std::endl;

    conta.testarDestrutor();
    return 0;
}