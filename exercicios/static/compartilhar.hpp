struct Compartilhar{
    int valor;
    static int compartilhado;

    Compartilhar(int valor);
    int pegarValor();
    int pegarCompartilhado();

    private:
        void incrementar();
         

};