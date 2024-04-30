#include "Jogador.hpp"

Jogador::Jogador(int atributo1, int atributo2)
:Humano(atributo1)
{
    this->atributo2 = atributo2;
}

string Jogador::andar()
{
    return "andando como jogador";
}

string Jogador::falar()
{
    return "falando como jogador";
}

