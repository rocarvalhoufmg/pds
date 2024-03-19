/** 
   Declaração opaca da estrutura Contador
   opaco : não revela a estrutura interna 
*/
typedef struct Contador Contador;

// Protótipos das funções para manipular o contador

/**
 * Cria um novo contador com o limite especificado.
 *
 * @param limite O valor máximo que o contador pode atingir.
 * @return Um ponteiro para a estrutura do contador criado.
 */
Contador* criar_contador(int limite);

/**
 * Incrementa o valor do contador em 1.
 *
 * @param c O ponteiro para o contador a ser incrementado.
 */
void incrementar(Contador *c);

/**
 * Decrementa o valor do contador em 1.
 *
 * @param c O ponteiro para o contador a ser decrementado.
 */
void decrementar(Contador *c);

/**
 * Obtém o valor atual do contador.
 *
 * @param c O ponteiro para o contador.
 * @return O valor atual do contador.
 */
int obter_valor(Contador *c);

/**
 * Libera a memória alocada para o contador.
 *
 * @param c O ponteiro para o contador a ser destruído.
 */
void destruir_contador(Contador *c);