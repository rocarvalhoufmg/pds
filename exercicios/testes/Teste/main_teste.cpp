#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "Catch2.hpp"
#include "../Codigo/banco.hpp"
#include "../Codigo/correntista.hpp"
#include "../Codigo/conta.hpp"


TEST_CASE("QUANTIDADE DE CONTAS"){
    //Given - Dado que...
    Banco::quantidadeContas = 0;
    
    Banco inter;
    Correntista correntista1("Rodrigo", "079779797979");
    Correntista correntista2("Flavia", "11111111111");
    Conta conta1(correntista1, 1);
    Conta conta2(correntista2, 2);

    
    //When - Quando
    inter.addConta(conta1);
    inter.addConta(conta2);

    //Then - Então
    REQUIRE(Banco::quantidadeContas == 2);
}

TEST_CASE("SAQUE NAO PERMITIDO"){
    //Given - Dado que...
    Correntista correntista1("Rodrigo", "079779797979");
    Conta conta1(correntista1, 1);

    //Act - Quando
    bool confirmacao = conta1.sacar(10);

    //Then - Então

    REQUIRE(confirmacao == false);
    
}

TEST_CASE("SAQUE PERMITIDO"){
    //Given - Dado que...
    Correntista correntista1("Rodrigo", "079779797979");
    Conta conta1(correntista1, 10);

    //Act - Quando
    conta1.depositar(100);
    bool confirmacao = conta1.sacar(1);

    //Then - Então

    REQUIRE(confirmacao == true);
    
}

TEST_CASE("DEPOSITO NAO PERMITIDO"){
    //Given - Dado que...
    Correntista correntista1("Rodrigo", "079779797979");
    Conta conta1(correntista1, 0);

    //Act - Quando
    conta1.depositar(-100);

    //Then - Então

    REQUIRE(conta1.pegarSaldo() == 0);
    
}

TEST_CASE("DEPOSITO PERMITIDO"){
    //Given - Dado que...
    Correntista correntista1("Rodrigo", "079779797979");
    Conta conta1(correntista1, 0);

    //Act - Quando
    conta1.depositar(100);

    //Then - Então

    REQUIRE(conta1.pegarSaldo() == 100);
    
}

TEST_CASE("DEPOSITO"){
    
    float valor = GENERATE(100, 1000, 1);
    //Given - Dado que...
    Correntista correntista1("Rodrigo", "079779797979");
    Conta conta1(correntista1, 0);

    //Act - Quando
    conta1.depositar(valor);

    //Then - Então

    REQUIRE(conta1.pegarSaldo() == valor);
    
}
