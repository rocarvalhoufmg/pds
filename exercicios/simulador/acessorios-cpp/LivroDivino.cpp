#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/ataque/LivroDivino.hpp"

LivroDivino::LivroDivino(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int LivroDivino::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string LivroDivino::gerarRuidoAtaque()
{
    return "Flip Flip Flip";
}
