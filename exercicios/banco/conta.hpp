/*O string em C++ é um tipo de dado (uma classe) 
que serve para armazenar cadeias de caracteres, ou texto, simplesmente*/
#include <string>

/*Falando que as funções que utilizarei aqui estão dentro no namespace std.
  As funções, classes e objetos padroes da linguagem c++ foram colocados no espaco std*/
using std::string;

/*Poderia utilizar funcoes de outros namespace, inclusive conseguimos criar os nossos.
  Se não fosse usado o comando acima, vc teria que declarar std::string*/

/*struct Conta - Tudo seria publico por padrão*/
/*class Conta - Tudo seria privado por padrão*/

class Conta
{
    public:
        /*Código do banco onde será armazenado o dinheiro. Essa variável é compartilhada
        entre os objetos dessa classe*/
        static int banco;

    private:
        string nomeTitular;
        int numeroConta;
        float saldo;

    public:
        /*
       Em POO existe um conceito chamado sobrecarga de funções (function overloading). 
       Basicamente é a possibilidade de termos mais de uma função com o mesmo nome, 
       desde que os argumentos recebidos por ambas sejam diferentes.
       
       Mais informações podem ser obtidas em https://www.tutorialspoint.com/cplusplus/cpp_overloading.htm*/
        Conta();
        Conta(string nomeTitular, int numeroConta);
        Conta(string nomeTitular, int numeroConta, float saldo);

        float obterSaldo();
        string obterTitular();
        string paraTexto();
        void configurarSaldo(float saldo);
        void configurarTitular(string nomeTitular);
        void configurarNumeroConta(int numeroConta);
      
      public:
        ~Conta();
        void testarDestrutor();

};