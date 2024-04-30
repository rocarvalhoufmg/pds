#ifndef SIMULADOR
#define SIMULADOR

#include <vector>
#include <string>
#include "Personagem.hpp"

using std::vector;
using std::string;

class Simulador
{
    private:
        vector<Personagem*> equipe1;
        vector<Personagem*> equipe2;
    
    public:
        bool adicionarPersonagem(Personagem* personagem, int equipe);
        bool removerPersonagem(Personagem* personagem, int equipe);
        void iniciarSimulacao();
        int calcularVidaEquipe(int seletorDeEquipe);
        string statusSimulacao();

    private:
        bool removerPersonagem(Personagem* personagem, vector<Personagem*> equipe);
        Personagem* proximoPersonagem(vector<Personagem*> equipe);
        int criarCombate(Personagem* personagem1, Personagem* personagem2);
        string criarSaida(Personagem* personagem1, Personagem* personagem2, int dano);


};

#endif