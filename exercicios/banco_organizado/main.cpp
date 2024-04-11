#include <iostream>
#include "banco.hpp"
#include "correntista.hpp"
#include "conta.hpp"

using std::cout;
using std::endl;

int main()
{
    Banco inter;
    Correntista correntista1("Rodrigo", "079779797979");
    Correntista correntista2("Flavia", "11111111111");
    Conta conta1(correntista1, 1);
    Conta conta2(correntista2, 2);

    inter.addConta(conta1);
    inter.addConta(conta2);
    cout << "Iremos ver " << Banco::quantidadeContas << " contas: " << endl;
    inter.verContas();
    return 0;
}