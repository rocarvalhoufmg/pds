#include <vector>
#include "Caminhao.cpp"
#include "Van.cpp"
#include "Veiculo.cpp"

int main()
{
    std::vector<Veiculo*> veiculos;
    Veiculo* caminhao = new Caminhao("VW", "VW-FORTE", 1000, 2);
    Veiculo* van = new Van("TOPIQUE", "TOPIQUE",200,2);

    veiculos.push_back(caminhao);
    veiculos.push_back(van);

    for (auto veiculo : veiculos)
    {
        veiculo->exibirDados();
    }
}