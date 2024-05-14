#ifndef ESCUDODEFERRO
#define ESCUDODEFERRO

#include "../core-simulador-hpp/ArmaDefesa.hpp"
class EscudoDeFerro : public ArmaDefesa
{
    public:
        EscudoDeFerro(string descricaoArma,  int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif