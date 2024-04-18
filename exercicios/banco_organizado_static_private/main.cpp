#include <iostream>
#include "banco.hpp"
#include "correntista.hpp"
#include "conta.hpp"

using std::cout;
using std::endl;

int main()
{
    
    Banco inter;
    Banco concorrente;
    Correntista correntista1("Rodrigo", "079779797979");
    Correntista correntista2("Flavia", "11111111111");
    Correntista correntista3("Joana", "2222222222");
    Conta conta1(correntista1, 1);
    Conta conta2(correntista2, 2);
    Conta conta3(correntista3, 3);

    inter.addConta(conta1);
    inter.addConta(conta2);
    concorrente.addConta(conta3);

    cout << "obj Inter -> Quantidade total de contas = "  << inter.pegarQuantidadeContas() <<  endl;
    cout << "obj Conco -> Quantidade total de contas = "  << concorrente.pegarQuantidadeContas() << endl;
    
    inter.verContas();
    concorrente.verContas();
    return 0;
}