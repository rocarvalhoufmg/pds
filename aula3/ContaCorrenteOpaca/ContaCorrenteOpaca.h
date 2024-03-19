typedef struct ContaCorrenteOpaca ContaCorrenteOpaca;

int haSaldoSuficiente(ContaCorrenteOpaca* conta, double valor);
ContaCorrenteOpaca* criar_conta(int numero, int cpf);
void saque_conta(ContaCorrenteOpaca* conta, double valor);
void deposito_conta(ContaCorrenteOpaca* conta, double valor);
