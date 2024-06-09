#include <vector>
#include <iostream>
#include "cabecalho/Grafo2.hpp"
#include "cabecalho/Grafo.hpp"
#include "cabecalho/GrafoGenerico.hpp"
using std::vector;
using std::cout;
using std::endl;

void xpto(GrafoGenerico* grafo)
{
    cout << "oito" << endl;
}

int main()
{
    GrafoGenerico* g;

    int opcao = 1;

    if (opcao == 1)
    {
        g = new Grafo2(10);
    }
    else
    {
        g = new Grafo(10);
    }

    g->addAresta(1,2);
    g->addAresta(1,9);
    g->addAresta(2,3);
    g->addAresta(8,9);

    cout << g->eVizinho(1,3) << endl;
    cout << g->eVizinho(1,2) << endl;

    cout << "Vizinhos: " << endl;
    for(int v : g->vizinhos(1))
    {
        cout << v << " - " ;
    }
}