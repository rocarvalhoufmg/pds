
#include "Gerente.hpp"
#include "Vendedor.hpp"
#include "Sistema.cpp"

int main()
{
    Sistema* sistema = new Sistema();
    Gerente* gerente = new Gerente("Joana","79816","XPTO","123456");
    Vendedor* vendedor = new Vendedor("ROdrigo","11111","XPTO");

    sistema->login(gerente, "222222");
    sistema->login(vendedor,"12312");
}