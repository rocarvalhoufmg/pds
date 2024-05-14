#include "../personagens-hpp/Clerigo.hpp"

Clerigo::Clerigo(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Clerigo::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Clerigo::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Clerigo::pegarDescricao() 
{
    return "Pela luz divina!";
}