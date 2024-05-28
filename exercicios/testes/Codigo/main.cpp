#include <iostream>
#include "banco.hpp"
#include "correntista.hpp"
#include "conta.hpp"

using std::cout;
using std::endl;

//aula de hoje = https://github.com/catchorg/Catch2/blob/v2.x/docs/tutorial.md#top

int main()
{

    Correntista correntista1("Rodrigo", "079779797979");
    Conta conta1(correntista1, 10);

    bool confirmacao = conta1.sacar(1);
    
    if (confirmacao == true)
    {
        cout << "O Teste de Saque FALHOU" << endl;
    }
    return 0;
}