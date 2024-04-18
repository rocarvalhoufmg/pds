#include "TecnicoAdministrativo.hpp"
TecnicoAdministrativo::TecnicoAdministrativo(string nome, string cpf):Pessoa(nome,cpf)
{

}

void TecnicoAdministrativo::alterarRG(string rg)
{
    this->Pessoa::rg = rg;
}

string TecnicoAdministrativo::pegarRG()
{
    return rg;
}