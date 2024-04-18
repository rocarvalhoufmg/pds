#include <iostream>
#include "exemplo.hpp"

using std::cout;
using std::endl;

void stack()
{
    Pessoa p("Rodrigo");
}

void heap()
{
    Pessoa *p = new Pessoa("Rodrigo");
}

Pessoa* stack_p()
{
     Pessoa p("Rodrigo");
     return &p;
}

Pessoa* heap_p()
{
    Pessoa *p = new Pessoa("Rodrigo");
    return p;
}


int main(){
    //stack();
    //heap();
    Pessoa *p1 = stack_p();
    Pessoa *p2 = heap_p();

    //vai dar erro
    //cout << p1->GetNome() << endl;
    
    //vai funcionar
    //cout << p2->GetNome() << endl;
    return 0;
}