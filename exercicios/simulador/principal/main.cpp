#include <iostream>
#include <string>
#include "../personagens-hpp/Personagens.hpp"
#include "../acessorios-hpp/Acessorios.hpp"
#include "../core-simulador-hpp/Simulador.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{

    //Armas
    ArmaAtaque* arma1  = new LivroDivino("Biblia", 0, 12);
    ArmaAtaque* arma2  = new Espada("Espada Do Dragao", 0, 15);
    ArmaAtaque* arma3  = new ArcoElfico("Arco Elfico Divino", 0, 8);
    ArmaAtaque* arma4  = new Machado("Machado Vulcanico", 0, 19);
    ArmaAtaque* arma5  = new Cajado("Cajado De Esmeraldas", 0, 25);

    //Escudos
    ArmaDefesa* escudo1 = new AmuletoDivino("Amuleto Das Sombras", 5);
    ArmaDefesa* escudo2 = new Armadura("Armadura Divina", 5);
    ArmaDefesa* escudo3 = new CapaDaFurtividade("Capa Da Furtividade Flamejante", 4);
    ArmaDefesa* escudo4 = new EscudoDeFerro("Escudo De Ferro Dos Anoes", 9);
    ArmaDefesa* escudo5 = new PergaminhoDeProtecao("Pergaminho De Protecao De Jade", 8);
    
    //Personagens Equipe 1
    Personagem* p1 = new Clerigo(1, "Clerigo Eq1", 30, arma1, escudo1);
    Personagem* p2 = new Cavaleiro(1, "Cavaleiro Eq1", 10, arma2, escudo2);
    Personagem* p3 = new Elfo(1, "Elfo Eq1", 10, arma3, escudo3);
    Personagem* p4 = new Anao(1, "Anao Eq1", 10, arma4, escudo4);
    Personagem* p5 = new Feiticeiro(1, "Feiticeiro Eq1", 10, arma5, escudo5);

    //Personagens Equipe 1
    Personagem* p6 = new Clerigo(1, "Clerigo Eq2", 20, arma1, escudo1);
    Personagem* p7 = new Cavaleiro(1, "Cavaleiro Eq2", 20, arma2, escudo2);
    Personagem* p8 = new Elfo(1, "Elfo Eq2", 20, arma3, escudo3);
    Personagem* p9 = new Anao(1, "Anao Eq2", 20, arma4, escudo4);
    Personagem* p10 = new Feiticeiro(1, "Feiticeiro Eq2", 20, arma5, escudo5);

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