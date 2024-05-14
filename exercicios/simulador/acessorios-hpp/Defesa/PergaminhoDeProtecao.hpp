#ifndef PERAMINODEPROTECAO
#define PERAMINODEPROTECAO

#include "../core-simulador-hpp/ArmaDefesa.hpp"
class PergaminhoDeProtecao : public ArmaDefesa
{
    public:
        PergaminhoDeProtecao(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif