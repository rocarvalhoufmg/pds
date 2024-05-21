#include "Autenticavel.hpp"
Autenticavel::Autenticavel(string senha):
senha(senha)
{

}

bool Autenticavel::autenticar(string senha) 
{
    return this->senha == senha ? true : false;
}
    

