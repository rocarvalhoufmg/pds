
#include "../core-simulador-hpp/ArmaAtaque.hpp"

ArmaAtaque::ArmaAtaque(string descricaoArma, int minForca, int maxForca)
:descricaoArma(descricaoArma), minForca(minForca), maxForca(maxForca)
{

}

string ArmaAtaque::getDescricaoArma()
{
    return descricaoArma + "\t" + "[" + std::to_string(minForca) + "," + std::to_string(maxForca) + "]";
}