#include <stdio.h>

int main() {
    char colunas[] = "ABCDEFGHIJ";
    int tabuleiro[10][10];
    int i, j;

    // Preenche todo o tabuleiro com 0 (representando a água)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }
    
    // Os navios ocuparão 3 espaços cada e o valor '3' os representará.

    // Navio 1 (Horizontal)
    // Colocado na linha 5, começando da coluna B (índices: linha 4, coluna 1)
    tabuleiro[4][1] = 3;
    tabuleiro[4][2] = 3;
    tabuleiro[4][3] = 3;

    // Navio 2 (Vertical)
    // Colocado na coluna H, começando da linha 7 (índices: coluna 7, linha 6)
    tabuleiro[6][7] = 3;
    tabuleiro[7][7] = 3;
    tabuleiro[8][7] = 3;


    // --- IMPRIME O TABULEIRO ---
    printf("\n   *** TABULEIRO BATALHA NAVAL ***\n\n");

    // Imprime as letras das colunas (A, B, C...)
    printf("   "); // Espaço para alinhar com os números das linhas
    for (j = 0; j < 10; j++) {
        printf("%c ", colunas[j]);
    }
    printf("\n");

    // Imprime as linhas com seus números e o conteúdo do tabuleiro
    for (i = 0; i < 10; i++) {
        printf("%2d ", i + 1); // Imprime o número da linha (1 a 10)
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]); // Imprime o valor da célula (0 ou 3)
        }
        printf("\n");
    }
    printf("\n");

    return 0;
    

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
