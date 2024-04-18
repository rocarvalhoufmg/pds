#ifndef TA
#define TA
#include <string>
#include "Pessoa.hpp"

using std::string;

class TecnicoAdministrativo : public Pessoa
{
    public:
        TecnicoAdministrativo(string nome, string cpf);
        void alterarRG(string rg);
        string pegarRG();
};

#endif