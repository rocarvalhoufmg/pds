#include "../personagens-hpp/Anao.hpp"

Anao::Anao(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Anao::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Anao::criarDefesa()
{
    return armaDefesa->getResistencia() + 3;
}

string Anao::pegarDescricao() 
{
    return "Pela honra, erguemos nossos machados!";
}