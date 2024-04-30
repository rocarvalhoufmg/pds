
#include "iostream"
#include <vector>
#include "Humano.hpp"
#include "Bombeiro.hpp"
#include "Jogador.hpp"

using std::vector;
using std::cout;
using std::endl;

int main()
{
    vector<Humano*> pessoas;
    Bombeiro* bombeiro = new Bombeiro(1,2);
    Jogador* jogador = new Jogador(2,2);
    pessoas.push_back(bombeiro);
    pessoas.push_back(jogador);

    for(auto pessoa : pessoas)
    {
        cout << pessoa->falar() << endl;
    }

    // nao é permitido Humano* humano = new Humano(1);
    // conceito de classe abstrata

}