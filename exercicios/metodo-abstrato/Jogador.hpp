
#ifndef JOGADOR
#define JOGADOR

#include <string>
using std::string;

#include "Humano.hpp"

class Jogador : public Humano{
    public:
        int atributo2;
    
    public:
        Jogador(int atributo1, int atributo2);
        string andar() override;
        string falar() override;
};

#endif