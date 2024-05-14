#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/ataque/ArcoElfico.hpp"

ArcoElfico::ArcoElfico(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int ArcoElfico::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string ArcoElfico::gerarRuidoAtaque()
{
    return "Swooosh ";
}
