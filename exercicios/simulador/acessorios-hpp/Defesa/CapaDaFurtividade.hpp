#ifndef CAPADAFURTIVIDADE
#define CAPADAFURTIVIDADE

#include "../core-simulador-hpp/ArmaDefesa.hpp"
class CadaDaFurtividade : public ArmaDefesa
{
    public:
        CadaDaFurtividade(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif