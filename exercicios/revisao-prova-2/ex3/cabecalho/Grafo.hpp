#ifndef GRAFO
#define GRAFO

#include <vector>
#include "GrafoGenerico.hpp"

using std::vector;

class Grafo : public GrafoGenerico
{
    public:
        Grafo(int quantidadeDePontos);
        ~Grafo();
        void addAresta(int origem, int destino) override;
        void removerAresta(int origem, int destino) override;
        bool eVizinho(int no1, int no2) override ;
        vector<int> vizinhos(int no) override;

    private:
        int** matriz;
        bool validarNos(int origem, int destino);
};
#endif