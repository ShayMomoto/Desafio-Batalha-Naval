#include <stdio.h>

#define TABULEIRO 10
#define TAM_HABILIDADE 5
#define NAVIO 3
#define AGUA 0
#define HABILIDADE 5

void inicializarTabuleiro(int tabuleiro[TABULEIRO][TABULEIRO]) {
    for (int i = 0; i < TABULEIRO; i++) {
        for (int j = 0; j < TABULEIRO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }
}

void posicionarNavio(int tabuleiro[TABULEIRO][TABULEIRO], int linha, int coluna, char direcao) {
    for (int i = 0; i < 3; i++) {
        if (direcao == 'H') {
            tabuleiro[linha][coluna + i] = NAVIO;
        } else if (direcao == 'V') {
            tabuleiro[linha + i][coluna] = NAVIO;
        } else if (direcao == 'D') {
            tabuleiro[linha + i][coluna + i] = NAVIO;
        } else if (direcao == 'E') {
            tabuleiro[linha + i][coluna - i] = NAVIO;
        }
    }
}

void aplicarHabilidade(int tabuleiro[TABULEIRO][TABULEIRO], int origemLinha, int origemColuna, char tipo) {
    int centro = TAM_HABILIDADE / 2;

    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            int linhaTab = origemLinha - centro + i;
            int colunaTab = origemColuna - centro + j;

            if (linhaTab >= 0 && linhaTab < TABULEIRO && colunaTab >= 0 && colunaTab < TABULEIRO) {
                int dif_i = (i - centro >= 0) ? (i - centro) : -(i - centro);
                int dif_j = (j - centro >= 0) ? (j - centro) : -(j - centro);

                if (
                    (tipo == 'C' && dif_i + dif_j <= centro) ||                      // Cone
                    (tipo == 'R' && (i == centro || j == centro)) ||                 // Cruz
                    (tipo == 'O' && dif_i + dif_j <= centro)                         // Octaedro (Losango)
                ) {
                    if (tabuleiro[linhaTab][colunaTab] != NAVIO) {
                        tabuleiro[linhaTab][colunaTab] = HABILIDADE;
                    }
                }
            }
        }
    }
}

void exibirTabuleiro(int tabuleiro[TABULEIRO][TABULEIRO]) {
    printf("Tabuleiro:\n");
    for (int i = 0; i < TABULEIRO; i++) {
        for (int j = 0; j < TABULEIRO; j++) {
            if (tabuleiro[i][j] == AGUA) {
                printf("~ ");
            } else if (tabuleiro[i][j] == NAVIO) {
                printf("N ");
            } else if (tabuleiro[i][j] == HABILIDADE) {
                printf("* ");
            }
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TABULEIRO][TABULEIRO];

    inicializarTabuleiro(tabuleiro);

    // Posicionar navios
    posicionarNavio(tabuleiro, 0, 0, 'H'); // Horizontal
    posicionarNavio(tabuleiro, 2, 5, 'V'); // Vertical
    posicionarNavio(tabuleiro, 5, 0, 'D'); // Diagonal principal
    posicionarNavio(tabuleiro, 5, 9, 'E'); // Diagonal secundária

    // Aplicar habilidades
    aplicarHabilidade(tabuleiro, 3, 3, 'C'); // Cone
    aplicarHabilidade(tabuleiro, 6, 6, 'R'); // Cruz
    aplicarHabilidade(tabuleiro, 8, 2, 'O'); // Octaedro

    exibirTabuleiro(tabuleiro);

    return 0;
}
