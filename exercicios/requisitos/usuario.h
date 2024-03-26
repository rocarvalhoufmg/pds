// Declaração da estrutura opaca Usuario
typedef struct Usuario Usuario;

/**
 * @brief Cria um novo usuário do sistema.
 * 
 * @param nome O nome do usuário.
 * @param email O email do usuário.
 * @param data_nascimento A data de nascimento do usuário.
 * @return Um ponteiro para o novo usuário criado.
 */
Usuario* criarUsuario(const char* nome, const char* email, int idade);

/**
 * @brief Destrói um usuário, liberando a memória alocada.
 * 
 * @param usuario O usuário a ser destruído.
 */
void destruirUsuario(Usuario* usuario);

/**
 * @brief Obtém o nome de um usuário.
 * 
 * @param usuario O usuário do qual se deseja obter o nome.
 * @return O nome do usuário.
 */
const char* obterNomeUsuario(Usuario* usuario);

/**
 * @brief Obtém o email de um usuário.
 * 
 * @param usuario O usuário do qual se deseja obter o email.
 * @return O email do usuário.
 */
const char* obterEmailUsuario(Usuario* usuario);

/**
 * @brief Obtém a idade de um usuário.
 * 
 * @param usuario O usuário do qual se deseja obter a idade.
 * @return A idade do usuário.
 */
int obterIdadeUsuario(Usuario* usuario);