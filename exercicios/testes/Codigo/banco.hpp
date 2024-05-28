#ifndef BANCO
#define BANCO
#include <vector>
#include "conta.hpp"

using std::vector;

class Banco{
    private:
        vector<Conta> contas;
    
    public:
        static int quantidadeContas;

    public:
        void addConta(Conta conta);
        void verContas();    

};
#endif