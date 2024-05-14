#ifndef CLERIGO
#define CLERIGO
#include "../core-simulador-hpp/Personagem.hpp"
class Clerigo : public Personagem
{
    public:
        Clerigo(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;
};
#endif