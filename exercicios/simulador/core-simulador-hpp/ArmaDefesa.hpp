#ifndef AD
#define AD

#include <string>
using std::string;
class ArmaDefesa
{
    protected:
        string descricaoArma;
        int resistencia;

    public:
        ArmaDefesa(string descricaoArma, int resistencia);
        virtual string getDescricaoArma() = 0;
        virtual int getResistencia() = 0;
        

};

#endif