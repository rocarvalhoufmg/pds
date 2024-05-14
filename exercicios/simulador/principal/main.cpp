#include <iostream>
#include <string>
#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Escudo.hpp"
#include "../personagens-hpp/Chaves.hpp"
#include "../personagens-hpp/Clerigo.hpp"
#include "../personagens-hpp/Cavaleiro.hpp"
#include "../personagens-hpp/Feiticeiro.hpp"
#include "../personagens-hpp/Anao.hpp"
#include "../personagens-hpp/Elfo.hpp"
#include "../core-simulador-hpp/Simulador.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* arma  = new Rosa("Super Rosa Amarela",0,10);
    ArmaAtaque* arma2 = new Colher("Colher de Pata",0,50);
    ArmaDefesa* escudo = new Escudo("Latão", 1);
    
    Personagem* p1 = new Clerigo(1, "Clerigo Eq1", 10, arma, escudo);
    Personagem* p2 = new Cavaleiro(1, "Cavaleiro Eq1", 10, arma, escudo);
    Personagem* p3 = new Elfo(1, "Elfo Eq1", 10, arma, escudo);
    Personagem* p4 = new Anao(1, "Anao Eq1", 10, arma, escudo);
    Personagem* p5 = new Feiticeiro(1, "Feiticeiro Eq1", 10, arma, escudo);

    Personagem* p6 = new Clerigo(1, "Clerigo Eq2", 20, arma, escudo);
    Personagem* p7 = new Cavaleiro(1, "Cavaleiro Eq2", 20, arma, escudo);
    Personagem* p8 = new Elfo(1, "Elfo Eq2", 20, arma, escudo);
    Personagem* p9 = new Anao(1, "Anao Eq2", 20, arma, escudo);
    Personagem* p10 = new Feiticeiro(1, "Feiticeiro Eq2", 20, arma, escudo);

    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 1);
    simulador->adicionarPersonagem(p3, 1);
    simulador->adicionarPersonagem(p4, 1);
    simulador->adicionarPersonagem(p5, 1);

    simulador->adicionarPersonagem(p6, 2);
    simulador->adicionarPersonagem(p7, 2);
    simulador->adicionarPersonagem(p8, 2);
    simulador->adicionarPersonagem(p9, 2);
    simulador->adicionarPersonagem(p10, 2);
    
    simulador->iniciarSimulacao();

    return 0;
}