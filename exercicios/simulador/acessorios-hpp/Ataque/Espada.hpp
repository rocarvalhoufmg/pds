#ifndef ESPADA
#define ESPADA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Espada : public ArmaAtaque
{
    public:
        Espada(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif