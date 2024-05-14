#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/ataque/Espada.hpp"

Espada::Espada(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Espada::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Espada::gerarRuidoAtaque()
{
    return "Clang";
}
