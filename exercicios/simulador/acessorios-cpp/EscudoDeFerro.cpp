#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/defesa/EscudoDeFerro.hpp"

EscudoDeFerro::EscudoDeFerro(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string EscudoDeFerro::getDescricaoArma() 
{
    return this->descricaoArma;
}

int EscudoDeFerro::getResistencia() 
{
    return this->resistencia;
}