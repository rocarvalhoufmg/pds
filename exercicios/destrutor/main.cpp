#include "ClasseA.hpp"
#include "ClasseB.hpp"
#include "iostream"

int main()
{
    //ponteiro sendo referenciado pela classe base
    ClasseA* classe1 = new ClasseB(1,2);
    ClasseB* classe2 = new ClasseB(1,2);

    //testar diferentes deletes
    delete classe1;


}