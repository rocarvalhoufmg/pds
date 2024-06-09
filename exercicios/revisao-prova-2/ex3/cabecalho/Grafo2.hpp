#ifndef GRAFO2
#define GRAFO2

#include <vector>
#include "GrafoGenerico.hpp"

using std::vector;

class Grafo2 : public GrafoGenerico
{
    public:
        Grafo2(int quantidadeDePontos);
        ~Grafo2();
        void addAresta(int origem, int destino) override;
        void removerAresta(int origem, int destino) override;
        bool eVizinho(int no1, int no2) override;
        vector<int> vizinhos(int no) override;

    private:
        vector<vector<int>> matriz;
        bool validarNos(int origem, int destino);
};
#endif