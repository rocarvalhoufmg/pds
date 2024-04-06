typedef struct Arvore Arvore;

Arvore* arvore_cria();

int arvore_busca(Arvore* arvore, int x);

void arvore_inserir(Arvore* arvore, int x);

void arvore_apagar(Arvore* arvore, int x);

void arvore_imprimir(Arvore* arvore);