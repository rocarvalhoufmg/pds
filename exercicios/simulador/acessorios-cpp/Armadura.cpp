#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/defesa/Armadura.hpp"

Armadura::Armadura(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Armadura::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Armadura::getResistencia() 
{
    return this->resistencia;
}