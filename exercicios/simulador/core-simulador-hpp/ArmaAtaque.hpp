#ifndef AA
#define AA

#include <string>
using std::string;
class ArmaAtaque
{
    private:
        string descricaoArma;

    protected:
        int minForca;
        int maxForca;

    public:
        ArmaAtaque(string descricaoArma, int minForca, int maxForca);
        string getDescricaoArma();
        virtual int gerarForcaAtaque() = 0;
        virtual string gerarRuidoAtaque() = 0;
        

};

#endif