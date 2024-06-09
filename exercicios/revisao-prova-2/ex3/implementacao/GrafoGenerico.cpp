#include "GrafoGenerico.hpp"
int GrafoGenerico::getQuantidadePontos()
{
    return this->quantidadeDePontos;
}

GrafoGenerico::GrafoGenerico(int quantidadeDePontos)
{
    this->quantidadeDePontos = quantidadeDePontos;
}