#include <exception>
#include <stdexcept>
#include <iostream>
#include "Grafo2.hpp"

Grafo2::Grafo2(int quantidadeDePontos):GrafoGenerico(quantidadeDePontos)
{
    for (int i = 0; i < quantidadeDePontos; i++) 
    {
        vector<int> aux;
        for (int j = 0; j < quantidadeDePontos; j++) 
        {
            aux.push_back(0);
        }
        matriz.push_back(aux);
    }
}


bool Grafo2::validarNos(int origem, int destino)
{
    if(origem < 0 || origem >= getQuantidadePontos() || destino < 0 || destino >= getQuantidadePontos() )
        throw std::runtime_error("Erro: Um ou mais nó(s) não existe(m)");
    return true;
}

void Grafo2::addAresta(int origem, int destino)
{
    validarNos(origem, destino);
    matriz[origem][destino] = 1;
    matriz[destino][origem] = 1;
}

void Grafo2::removerAresta(int origem, int destino)
{
    validarNos(origem, destino);
    matriz[origem][destino] = 0;
    matriz[destino][origem] = 0;
}

bool Grafo2::eVizinho(int origem, int destino)
{
    validarNos(origem, destino);
    return matriz[origem][destino] == 1 ? true : false;
}

vector<int> Grafo2::vizinhos(int no)
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
