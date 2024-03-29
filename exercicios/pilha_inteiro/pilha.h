typedef struct Pilha Pilha;

Pilha* pilha_cria();

int pilha_pop(Pilha* p);

void pilha_push(Pilha* p, int x);

void pilha_libera(Pilha* p);

void imprime(Pilha* pilha);