#ifndef CAJADO
#define CAJADO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Cajado : public ArmaAtaque
{
    public:
        Cajado(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif