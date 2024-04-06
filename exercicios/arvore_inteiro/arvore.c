#include <stdlib.h>
#include <stdio.h>

/*Os comentáraios estão de acordo com o que foi pedido, copiei grande parte
do enunciado do exercício*/

typedef struct No{
    struct No* direita;
    struct No* esquerda;
    int valor;
}No;

typedef struct{
    No* raiz;
}Arvore;

/*Assim como nas outras TADs, para criar uma arvore só precisamos instanciar ela e
criar uma referência para o elemento(s) que serviram de referência para as operações.
Neste caso, apenas a raiz é o suficiente.*/
Arvore* arvore_cria(){
    Arvore* arvore = malloc(sizeof(Arvore));
    arvore->raiz = NULL;
    return arvore;
}

/*Para criar um nó e deixar o restante do código mais limpo e organizado*/
No* criar_no(int x){
    No* no = malloc(sizeof(No));
    no->direita = NULL;
    no->esquerda = NULL;
    no->valor = x;
    return no;
}
void arvore_inserir(Arvore* arvore, int x){
    //Neste ponto a árvore não existe.
    if (arvore == NULL)
        return;

    No* no = arvore->raiz;
    if (no == NULL){
        /*Caso a árvore ainda esteja vazia, o algoritmo 
         deve criar um novo nó com o valor a ser inserido 
        e colocá-lo como raiz da árvore*/
        arvore->raiz = criar_no(x);
    }else{
        //se a árvore não estiver vazia, vamos procurar onde inserir de forma recursiva
        //a recursividade vai deixar o código mais simples
        inserir(no, x);
    }
}

void inserir(No* no, int x){
    /*
    o algoritmo deve verificar se o valor a ser inserido é menor ou maior que o valor 
    do nó atual. Se for maior, o algoritmo deve verificar se o nó da direita é nulo.
     Se for nulo, o algoritmo deve criar um novo nó com o valor a ser inserido e colocá-lo
    como "filho" direito do nó atual. */
    if(no->valor < x){
        if(no->direita == NULL){
            no->direita = criar_no(x);
        }else{
            /*Se não for nulo, o algoritmo deve chamar recursivamente o mesmo algoritmo, 
            passando como parâmetro o valor a ser inserido e o nó da direita como o novo 
            da subárvore.*/
            inserir(no->direita, x);
        }
    }else{
        /*A ideia é a mesma, porém para valores menores devemos ir para esquerda*/
        if(no->esquerda == NULL){
            no->esquerda = criar_no(x);
        }else{
            inserir(no->esquerda, x);
        }
    }
}

int arvore_busca(Arvore* arvore, int x){
    /*Verificando se a árvore existe*/
    if(arvore == NULL)
        return 0;
    /*Se a árvore existe, vamos validar se está vazia*/
    if(arvore->raiz == NULL)
        return 0;
    
    /*Nossa busca será baseaada em nó, por este motivo foi criada uma função
    interna para fazer a busca (recursiva novamente para facilitar as coisas)*/
    return buscar_no(arvore->raiz, x);

}

/*A ideia aqui é bem parecida com a inserção, tentem entender..*/
int buscar_no(No* no, int x){
    if(no->valor == x){
        return 1;
    }else 
    if(no->valor < x){
        if(no->direita == NULL)
            return 0;
        else
            return buscar_no(no->direita, x);
    }else{
        if(no->esquerda == NULL)
            return 0;
        else
            return buscar_no(no->esquerda, x);
    }
}

int main(){
    Arvore* arvore = arvore_cria();
    arvore_inserir(arvore, 10);
    arvore_inserir(arvore, 0);
    arvore_inserir(arvore, 20);
    arvore_inserir(arvore, 5);
    arvore_inserir(arvore, 25);
    printf("%d\n", arvore_busca(arvore, 0));
    printf("%d\n", arvore_busca(arvore, 10));
    printf("%d\n", arvore_busca(arvore, 15));
    printf("%d\n", arvore_busca(arvore, 25));
}

