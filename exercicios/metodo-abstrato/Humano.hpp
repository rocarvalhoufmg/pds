#ifndef HUMANO
#define HUMANO

#include <string>
using std::string;

class Humano{
    public:
        int atributo1;

    public:
        Humano(int atributo1);
        virtual string andar() = 0;
        virtual string falar() = 0;
};
#endif