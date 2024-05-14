#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/defesa/PergaminhoDeProtecao.hpp"

PergaminhoDeProtecao::PergaminhoDeProtecao(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string PergaminhoDeProtecao::getDescricaoArma() 
{
    return this->descricaoArma;
}

int PergaminhoDeProtecao::getResistencia() 
{
    return this->resistencia;
}