#ifndef ARCOELFICO
#define ARCOELFICO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class ArcoElfico : public ArmaAtaque
{
    public:
        ArcoElfico(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif