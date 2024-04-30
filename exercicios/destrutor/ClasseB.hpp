
#ifndef CLASSEB
#define CLASSEB

#include "ClasseA.hpp"
class ClasseB : public ClasseA{
    public:
        int atributo2;
    
    public:
        ClasseB(int atributo1, int atributo2);
        ~ClasseB();
};

#endif