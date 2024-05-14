#include "../personagens-hpp/Elfo.hpp"

Elfo::Elfo(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Elfo::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque() + 3;
}

int Elfo::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Elfo::pegarDescricao() 
{
    return "Natureza, seja nossa aliada!";
}