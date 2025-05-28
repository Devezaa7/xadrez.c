#include <stdio.h>

int main() {
    // Quantidade de casas que o Cavalo irá se mover
    int movimentosParaBaixo = 2;
    int movimentosParaEsquerda = 1;

    // Movimentos anteriores (de outras peças, se houver)
    printf("Movimentos anteriores...\n");
    printf("Direita\n");
    printf("Cima\n");

    // Linha em branco para separar os movimentos
    printf("\n");

    // Movimento do Cavalo: duas casas para baixo (for) e uma para esquerda (while)
    printf("Movimento do Cavalo:\n");

    // Loop for para mover duas vezes para baixo
    for (int i = 0; i < movimentosParaBaixo; i++) {
        printf("Baixo\n");
    }

    // Loop while para mover uma vez para esquerda
    int j = 0;
    while (j < movimentosParaEsquerda) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}
