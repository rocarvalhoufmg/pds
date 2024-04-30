#ifndef PERSONAGEM
#define PERSONAGEM

#include <string>
#include "ArmaAtaque.hpp"
#include "ArmaDefesa.hpp"

using std::string;

class Personagem
{
    private:
        int id;
        string nome;
        int vida;
    
    protected:
        ArmaAtaque* armaAtaque;
        ArmaDefesa* armaDefesa;

    public:
        Personagem(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int getId();
        string getNome();
        int getVida();
        void setVida(int vida);
        ArmaAtaque* getArmaAtaque();
        virtual int gerarAtaque() = 0;
        virtual int criarDefesa() = 0;
        virtual string pegarDescricao() = 0;

};

#endif