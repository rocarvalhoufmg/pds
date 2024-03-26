// Declaração da estrutura opaca Livro
typedef struct Livro Livro;

/**
 * @brief Cria um novo livro.
 * 
 * @param codigo O código do livro.
 * @param titulo O título do livro.
 * @param autor O autor do livro.
 * @param anoPublicacao O ano de publicação do livro.
 * @return Um ponteiro para o novo livro criado.
 */
Livro* criarLivro(int codigo, const char* titulo, const char* autor, int anoPublicacao);

/**
 * @brief Destrói um livro, liberando a memória alocada.
 * 
 * @param livro O livro a ser destruído.
 */
void destruirLivro(Livro* livro);

/**
 * @brief Obtém o código de um livro.
 * 
 * @param livro O livro do qual se deseja obter o código.
 * @return O código do livro.
 */
int obterCodigoLivro(Livro* livro);

/**
 * @brief Obtém o título de um livro.
 * 
 * @param livro O livro do qual se deseja obter o título.
 * @return O título do livro.
 */
const char* obterTituloLivro(Livro* livro);

/**
 * @brief Obtém o autor de um livro.
 * 
 * @param livro O livro do qual se deseja obter o autor.
 * @return O autor do livro.
 */
const char* obterAutorLivro(Livro* livro);

/**
 * @brief Obtém o ano de publicação de um livro.
 * 
 * @param livro O livro do qual se deseja obter o ano de publicação.
 * @return O ano de publicação do livro.
 */
int obterAnoPublicacaoLivro(Livro* livro);