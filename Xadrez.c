#include <stdio.h>

// Número de casas a mover para cada peça (pode ser alterado)
const int movimentos_torre = 4;
const int movimentos_bispo = 3;
const int movimentos_rainha = 2;
const int movimentos_cavalo = 2;

// -------------------------- TORRE --------------------------
void moverTorreCima(int casas) {
    if (casas <= 0) return;
    printf("Cima\n");
    moverTorreCima(casas - 1);
}

void moverTorreDireita(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorreDireita(casas - 1);
}

// -------------------------- BISPO --------------------------
void moverBispoRecursivo(int vertical, int horizontal) {
    if (vertical <= 0 || horizontal <= 0) return;
    printf("Diagonal superior direita\n");
    moverBispoRecursivo(vertical - 1, horizontal - 1);
}

void moverBispoComLoops(int passos) {
    for (int i = 1; i <= passos; i++) { // Movimento vertical
        for (int j = 1; j <= passos; j++) { // Movimento horizontal
            if (i == j) {
                printf("Diagonal inferior esquerda\n");
            }
        }
    }
}

// -------------------------- RAINHA --------------------------
void moverRainhaVertical(int casas) {
    if (casas <= 0) return;
    printf("Baixo\n");
    moverRainhaVertical(casas - 1);
}

void moverRainhaDiagonal(int casas) {
    if (casas <= 0) return;
    printf("Diagonal superior esquerda\n");
    moverRainhaDiagonal(casas - 1);
}

// -------------------------- CAVALO --------------------------
void moverCavalo() {
    // Cavalo move em L: 2 para cima, 1 para direita
    for (int i = 1; i <= movimentos_cavalo; i++) {
        for (int j = 1; j <= movimentos_cavalo; j++) {
            if (i == 2 && j == 1) {
                printf("Cavalo: 2 para cima, 1 para direita\n");
                continue;
            }
            if (i + j > 3) break; // Controla fluxo
        }
    }
}

// -------------------------- MAIN --------------------------
int main() {
    // Movimentos da Torre
    printf("Movimentos da Torre:\n");
    moverTorreCima(movimentos_torre);
    moverTorreDireita(movimentos_torre);
    printf("\n");

    // Movimentos do Bispo
    printf("Movimentos do Bispo (recursivo):\n");
    moverBispoRecursivo(movimentos_bispo, movimentos_bispo);
    printf("\nMovimentos do Bispo (loops aninhados):\n");
    moverBispoComLoops(movimentos_bispo);
    printf("\n");

    // Movimentos da Rainha
    printf("Movimentos da Rainha:\n");
    moverRainhaVertical(movimentos_rainha);
    moverRainhaDiagonal(movimentos_rainha);
    printf("\n");

    // Movimentos do Cavalo
    printf("Movimentos do Cavalo:\n");
    moverCavalo();
    printf("\n");

    return 0;
}
