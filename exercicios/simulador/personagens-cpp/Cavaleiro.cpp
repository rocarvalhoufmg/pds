#include "../personagens-hpp/Cavaleiro.hpp"

Cavaleiro::Cavaleiro(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Cavaleiro::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque() + 1;
}

int Cavaleiro::criarDefesa()
{
    return armaDefesa->getResistencia() + 2;
}

string Cavaleiro::pegarDescricao() 
{
    return "Cavalgamos pela justiça!";
}