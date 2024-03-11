typedef struct{    
    float x;
    float y;
}Ponto;

/**
 * Cria um ponto com as coordenadas x e y especificadas.
 *
 * @param x A coordenadada x de um ponto.
 * @param y A coordenadada y de um ponto.
 * @return Um ponto com as coordeadas x e y fornecidas.
 */
Ponto criar_ponto(double x, double y);

/**
 * Calcula a distância entre dois pontos.
 *
 * @param p1 Ponto de referência 1.
 * @param p2 Ponto de referência 2
 * @return A distância entre dois ponto baseado na distância euclidiana.
 */
double calcular_distancia(Ponto p1, Ponto p2);