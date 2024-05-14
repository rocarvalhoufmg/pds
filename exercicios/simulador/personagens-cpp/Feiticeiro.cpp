#include "../personagens-hpp/Feiticeiro.hpp"

Feiticeiro::Feiticeiro(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Feiticeiro::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque() + 5;
}

int Feiticeiro::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Feiticeiro::pegarDescricao() 
{
    return "Que as chamas da magia queimem brilhantemente!";
}