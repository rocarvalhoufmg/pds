#ifndef ANAO
#define ANAO
#include "../core-simulador-hpp/Personagem.hpp"
class Anao : public Personagem
{
    public:
        Anao(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif