#include <stdio.h>

/*
Quando usamos *ponteiro no lado esquerdo de uma atribuição, estamos dizendo ao 
compilador para atualizar o valor na posição de memória apontada pelo ponteiro 
com o novo valor.
*/

//parâmetro por referência
void altera_valor(int *ponteiro){
    *ponteiro = *ponteiro + 1;
     printf("\nEndereco por referenci = %p", ponteiro);
}

//parâmetro por cópia
void nao_altera_valor(int variavel){
    variavel = variavel + 1;
    printf("\nEndereco por copia = %p", &variavel);
}

void main(){
    int variavel = 10;

    //Ao declarar um ponteiro, usamos o * para indicar que a variável é um ponteiro.
    int *ponteiro = &variavel;

    printf("Valor %d ", variavel);
    printf("\nEndereco %p", &variavel);
    printf("\nEndereco %p", ponteiro);

    /*A desreferenciação ocorre quando usamos o * para acessar o valor apontado pelo
     ponteiro.*/
    printf("\nValor %d", *ponteiro); 

    nao_altera_valor(variavel);
    printf("\nValor %d ", variavel);

    altera_valor(&variavel);
    printf("\nValor %d ", variavel);

}