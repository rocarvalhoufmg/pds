#include "compartilhar.hpp"

int Compartilhar::compartilhado = 0;

Compartilhar::Compartilhar(int valor)
{
    this->valor = valor;
    incrementar();
}

void Compartilhar::incrementar()
{
    Compartilhar::compartilhado++;
}

int Compartilhar::pegarValor()
{
    return this->valor;
}

int Compartilhar::pegarCompartilhado()
{
    return this->compartilhado;
}