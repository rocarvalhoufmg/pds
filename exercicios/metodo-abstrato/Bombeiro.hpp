
#ifndef BOMBEIRO
#define BOMBEIRO

#include <string>
using std::string;

#include "Humano.hpp"

class Bombeiro : public Humano{
    public:
        int atributo2;
    
    public:
        Bombeiro(int atributo1, int atributo2);
        string andar() override;
        string falar() override;
};

#endif