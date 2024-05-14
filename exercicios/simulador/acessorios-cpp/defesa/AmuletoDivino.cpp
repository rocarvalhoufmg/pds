#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/defesa/AmuletoDivino.hpp"

AmuletoDivino::AmuletoDivino(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string AmuletoDivino::getDescricaoArma() 
{
    return this->descricaoArma;
}

int AmuletoDivino::getResistencia() 
{
    return this->resistencia;
}