typedef struct Fila Fila;

Fila* fila_cria();

int fila_retira(Fila* fila);

void fila_insere(Fila* fila, int x);

void fila_libera(Fila* fila);

void fila_imprime(Fila* fila);