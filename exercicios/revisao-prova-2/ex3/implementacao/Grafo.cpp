#include <exception>
#include <stdexcept>
#include <iostream>
#include "Grafo.hpp"

Grafo::Grafo(int quantidadeDePontos):GrafoGenerico(quantidadeDePontos)
{
    matriz = new int*[quantidadeDePontos];
    for (int i = 0; i < quantidadeDePontos; ++i) {
        matriz[i] = new int[quantidadeDePontos];
    }

    for (int i = 0; i < quantidadeDePontos; i++) 
    {
        for (int j = 0; j < quantidadeDePontos; j++) 
        {
            matriz[i][j] = 0;
        }
    }

}


bool Grafo::validarNos(int origem, int destino)
{
    if(origem < 0 || origem >= getQuantidadePontos()  || destino < 0 || destino >= getQuantidadePontos() )
        throw std::runtime_error("Erro: Um ou mais nó(s) não existe(m)");
    return true;
}

void Grafo::addAresta(int origem, int destino)
{
    validarNos(origem, destino);
    matriz[origem][destino] = 1;
    matriz[destino][origem] = 1;
}

void Grafo::removerAresta(int origem, int destino)
{
    validarNos(origem, destino);
    matriz[origem][destino] = 0;
    matriz[destino][origem] = 0;
}

bool Grafo::eVizinho(int origem, int destino)
{
    validarNos(origem, destino);
    return matriz[origem][destino] == 1 ? true : false;
}

vector<int> Grafo::vizinhos(int no)
{
    validarNos(no, 0);
    vector<int> vizinhos;
    for (int i = 0; i < getQuantidadePontos() ; i++)
    {
        if (matriz[no][i]==1)
            vizinhos.push_back(i);
    }
    return vizinhos;
}

Grafo::~Grafo()
{
    for (int i = 0; i < getQuantidadePontos() ; ++i) {
        delete[] matriz[i];
    }
    delete[] matriz;
}