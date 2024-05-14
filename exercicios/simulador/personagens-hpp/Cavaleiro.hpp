#ifndef CAVALEIRO
#define CAVALEIRO
#include "../core-simulador-hpp/Personagem.hpp"
class Cavaleiro : public Personagem
{
    public:
        Cavaleiro(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif