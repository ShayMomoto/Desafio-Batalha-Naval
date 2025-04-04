#include <stdio.h>

int main() {
    int tamanho = 10;  // Tamanho do tabuleiro
    int navio = 3;     // Tamanho dos navios

    int tabuleiro[10][10] = {0}; // Inicializa o tabuleiro com água (0)

    // Definição das coordenadas iniciais dos navios
    int linha_horizontal = 2, coluna_horizontal = 4; // Navio horizontal
    int linha_vertical = 5, coluna_vertical = 7;     // Navio vertical

    // Posiciona o navio horizontal (tamanho 3)
    for (int i = 0; i < navio; i++) {
        tabuleiro[linha_horizontal][coluna_horizontal + i] = navio;
    }

    // Posiciona o navio vertical (tamanho 3)
    for (int i = 0; i < navio; i++) {
        tabuleiro[linha_vertical + i][coluna_vertical] = navio;
    }

    // Exibe o tabuleiro
    printf("Tabuleiro de Batalha Naval:\n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
