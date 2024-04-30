#include "Bombeiro.hpp"

Bombeiro::Bombeiro(int atributo1, int atributo2)
:Humano(atributo1)
{
    this->atributo2 = atributo2;
}

string Bombeiro::andar()
{
    return "andando como bombeiro";
}

string Bombeiro::falar()
{
    return "falando como bombeiro";
}

