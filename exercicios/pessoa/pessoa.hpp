#include <string>
using std::string;

class Pessoa
{
    private:
        string nome;
        string cpf;

    public:
        Pessoa();
        Pessoa(string nome);
        Pessoa(string nome, string cpf);
        string paraTexto();

    private: 
        bool validarCPF();
};