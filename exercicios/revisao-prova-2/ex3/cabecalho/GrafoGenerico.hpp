#ifndef GRAFOG
#define GRAFOG

#include <vector>

using std::vector;

class GrafoGenerico
{
    public:
        GrafoGenerico(int quantidadeDePontos);
        virtual void addAresta(int origem, int destino) = 0;
        virtual void removerAresta(int origem, int destino) = 0;
        virtual bool eVizinho(int no1, int no2) = 0;
        virtual vector<int> vizinhos(int no) = 0;
        int getQuantidadePontos();

    private:
        int quantidadeDePontos;

};
#endif