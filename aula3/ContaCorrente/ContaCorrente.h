typedef struct {
    int numero;
    int cpf;
    double saldo;
} ContaCorrente;

int haSaldoSuficiente(ContaCorrente conta, double valor);
ContaCorrente criar_conta(int numero, int cpf);
ContaCorrente saque_conta(ContaCorrente conta, double valor);
ContaCorrente deposito_conta(ContaCorrente conta, double valor);
