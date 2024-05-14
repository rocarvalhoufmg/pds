#ifndef CAPADAFURTIVIDADE
#define CAPADAFURTIVIDADE

#include "../core-simulador-hpp/ArmaDefesa.hpp"
class CapaDaFurtividade : public ArmaDefesa
{
    public:
        CapaDaFurtividade(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif