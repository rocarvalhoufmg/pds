#ifndef FEITICEIRO
#define FEITICEIRO
#include "../core-simulador-hpp/Personagem.hpp"
class Feiticeiro: public Personagem
{
    public:
        Feiticeiro(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif