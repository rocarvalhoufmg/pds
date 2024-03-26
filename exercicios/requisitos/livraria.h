typedef struct Livro Livro;
typedef struct Usuario Usuario;

// Função para renovar o empréstimo 
// @Param usuario: A renovação será  para este usuario.
// @Param livro: A renovação será para este livro.
// @Param data: A renovação será para esta data.
// @return: 1 em caso de sucesso, 0 caso contrário
int renovarEmprestimo(Usuario* usuario, Livro* livro, int data);

// Função para criar um empréstimo 
// @Param usuario: O empréstimo será  para este usuario.
// @Param livro: O empréstimo será para este livro.
// @Param dataLocacao: O empréstimo será feito nesta data.
// @Param dataEntrega: O empréstimo encerra nesta data.
// @return: 1 em caso de sucesso, 0 caso contrário
int criarEmprestimo(Usuario* usuario, Livro* livro, int dataLocacao, int dataEntrega);

// Função para realizar uma reserva de livro
// @Param livro: O livro a ser reservado.
// @Param usuario: O usuário que está fazendo a reserva.
// @return: 1 em caso de sucesso, 0 caso contrário
int realizarReserva(Livro* livro, Usuario* usuario);

// Função para cancelar uma reserva
// @Param reserva: A reserva que será cancelada.
// @return: 1 em caso de sucesso, 0 caso contrário
int cancelarReserva(Livro* livro, Usuario* usuario);

// Função para mostrar as reservas de um usuário
// @Param usuario: O usuário para o qual as reservas serão mostradas.
// @return: Nenhum.
void mostrarReservas(Usuario* usuario);

//fazer o restante do arquivo comentado, não fazer igual será 
//feito a seguir

void salvarLivro(Livro* livro);
Livro* buscarLivroPorTitulo(const char* titulo);
Livro* buscarLivroPorAutor(const char* titulo);

void inscricaoProgramaLeitura(Usuario* usuario);
void removerInscricaoProgramaLeitura(Usuario* usuario);