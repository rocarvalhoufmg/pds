#ifndef CONTA
#define CONTA
#include "correntista.hpp"

class Conta{
    private:
        Correntista correntista;
        int numero;
        float saldo;

    public:
        Conta(Correntista correntista, int numero);
        void depositar(float saldo);
        bool sacar(float);
        float pegarSaldo();
        int pegarNumeroConta();
};
#endif