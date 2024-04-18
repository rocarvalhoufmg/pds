Stack (Pilha): SEM NEW
A alocação na stack é estática e ocorre automaticamente quando você declara uma variável local.
Os objetos alocados na stack têm tempo de vida vinculado ao escopo em que foram criados.
Normalmente, não há necessidade explícita de desalocação, pois a memória é liberada automaticamente ao sair do escopo.
Acesso à stack é mais rápido do que ao heap.
Usada para variáveis locais, como parâmetros de função e variáveis temporárias.

Heap (Monte): NEW
A alocação no heap é dinâmica e requer o uso do operador new ou malloc.
Objetos alocados no heap têm tempo de vida independente do escopo.
É necessário gerenciar manualmente a desalocação usando delete ou free.
Acesso ao heap é mais lento do que à stack.
Usado para objetos com duração mais longa, como estruturas de dados dinâmicas (listas, árvores, etc.).