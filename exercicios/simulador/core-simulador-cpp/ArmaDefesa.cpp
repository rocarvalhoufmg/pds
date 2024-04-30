#include "../core-simulador-hpp/ArmaDefesa.hpp"

ArmaDefesa::ArmaDefesa(string descricaoArma, int resistencia)
:descricaoArma(descricaoArma), resistencia(resistencia)
{

}

string ArmaDefesa::getDescricaoArma()
{
    return this->descricaoArma;
}

int ArmaDefesa::getResistencia()
{
    return this->resistencia;
}