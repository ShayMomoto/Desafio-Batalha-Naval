#include <stdio.h>

#define TABULEIRO 10   // Tamanho do tabuleiro
#define NAVIO 3        // Tamanho dos navios
#define MAR 0          // Representação da água
#define NAVIO_POS 3    // Representação do navio

int main() {
    int tabuleiro[TABULEIRO][TABULEIRO] = {MAR}; // Inicializa o tabuleiro com água

    // Definição das coordenadas dos navios
    int linha_horizontal = 2, coluna_horizontal = 4;
    int linha_vertical = 5, coluna_vertical = 7;
    int linha_diagonal1 = 0, coluna_diagonal1 = 0;
    int linha_diagonal2 = 7, coluna_diagonal2 = 9;

    // Posiciona o navio horizontal
    for (int i = 0; i < NAVIO; i++) {
        tabuleiro[linha_horizontal][coluna_horizontal + i] = NAVIO_POS;
    }

    // Posiciona o navio vertical
    for (int i = 0; i < NAVIO; i++) {
        tabuleiro[linha_vertical + i][coluna_vertical] = NAVIO_POS;
    }

    // Posiciona o navio diagonal 
    for (int i = 0; i < NAVIO; i++) {
        tabuleiro[linha_diagonal1 + i][coluna_diagonal1 + i] = NAVIO_POS;
    }

    // Posiciona o navio diagonal 
    for (int i = 0; i < NAVIO; i++) {
        tabuleiro[linha_diagonal2 + i][coluna_diagonal2 - i] = NAVIO_POS;
    }

    // Exibe o tabuleiro
    printf("Tabuleiro de Batalha Naval:\n");
    for (int i = 0; i < TABULEIRO; i++) {
        for (int j = 0; j < TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
