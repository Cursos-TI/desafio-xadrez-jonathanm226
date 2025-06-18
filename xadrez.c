#include <stdio.h>

// Constantes de movimentação
#define BISPO_MOVIMENTOS 5
#define TORRE_MOVIMENTOS 5
#define RAINHA_MOVIMENTOS 8

int main() {
    // ------------------------
    // MOVIMENTAÇÃO DO BISPO
    // ------------------------
    printf("Movimentação do Bispo (Diagonal Superior Direita):\n");

    // Para simular a movimentação na diagonal superior direita, usamos uma combinação de "Cima" e "Direita".
    int i;
    for (i = 0; i < BISPO_MOVIMENTOS; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    printf("\n");

    // ------------------------
    // MOVIMENTAÇÃO DA TORRE
    // ------------------------
    printf("Movimentação da Torre (Direita):\n");

    int j = 0;
    while (j < TORRE_MOVIMENTOS) {
        printf("Direita\n");
        j++;
    }

    printf("\n");

    // ------------------------
    // MOVIMENTAÇÃO DA RAINHA
    // ------------------------
    printf("Movimentação da Rainha (Esquerda):\n");

    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < RAINHA_MOVIMENTOS);

    return 0;
}