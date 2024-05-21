#ifndef SISTEMA
#define SISTEMA
#include "Autenticavel.hpp"
class Sistema
{
    public:
        bool login(Autenticavel* autenticavel, string senha)
        {
            return autenticavel->autenticar(senha);
        }
};
#endif