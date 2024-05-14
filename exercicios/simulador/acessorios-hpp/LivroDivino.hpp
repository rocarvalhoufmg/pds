#ifndef LIVRODIVINO
#define LIVRODIVINO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class LivroDivino : public ArmaAtaque
{
    public:
        LivroDivino(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif