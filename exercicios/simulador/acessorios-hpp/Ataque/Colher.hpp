#ifndef COLHER
#define COLHER

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Colher : public ArmaAtaque
{
    public:
        Colher(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif