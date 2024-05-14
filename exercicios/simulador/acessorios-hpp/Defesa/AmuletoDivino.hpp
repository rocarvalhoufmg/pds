#ifndef AMULETODIVINO
#define AMULETODIVINO

#include "../core-simulador-hpp/ArmaDefesa.hpp"
class AmuletoDivino : public ArmaDefesa
{
    public:
        AmuletoDivino(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif