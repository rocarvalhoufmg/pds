#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/defesa/CapaDaFurtividade.hpp"

CapaDaFurtividade::CapaDaFurtividade(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string CapaDaFurtividade::getDescricaoArma() 
{
    return this->descricaoArma;
}

int CapaDaFurtividade::getResistencia() 
{
    return this->resistencia;
}