#ifndef ELFO
#define ELFO
#include "../core-simulador-hpp/Personagem.hpp"
class Elfo : public Personagem
{
    public:
        Elfo(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;
};
#endif