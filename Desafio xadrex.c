#include <stdio.h>

// =======================
// Funções Recursivas
// =======================

// Torre: movimento em linha reta (exemplo: para cima)
void moverTorre(int casas) {
    if (casas <= 0) return; // caso base
    printf("Cima\n");
    moverTorre(casas - 1); // chamada recursiva
}

// Bispo: movimento diagonal (cima + direita)
// Aqui temos recursão e também loops aninhados dentro
void moverBispo(int casas) {
    if (casas <= 0) return; // caso base

    // Loop externo: movimento vertical
    for (int i = 0; i < 1; i++) { // uma casa vertical por vez
        printf("Cima\n");

        // Loop interno: movimento horizontal
        for (int j = 0; j < 1; j++) { // uma casa horizontal por vez
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1); // recursão para continuar diagonal
}

// Rainha: combina movimento da Torre e do Bispo
// Aqui, só para exemplo, faremos mover como Torre primeiro, depois como Bispo
void moverRainha(int casas) {
    if (casas <= 0) return; // caso base

    printf("Direita\n"); // movimento como Torre (horizontal)
    moverRainha(casas - 1); // chamada recursiva
}

// =======================
// Cavalo com Loops Complexos
// =======================
// Cavalo: 2 para cima, 1 para direita
void moverCavalo() {
    int movVertical = 2;
    int movHorizontal = 1;

    for (int v = 0, h = 0; v < movVertical || h < movHorizontal;) {
        if (v < movVertical) {
            printf("Cima\n");
            v++;
            continue; // vai para o próximo ciclo sem executar o resto
        }

        if (h < movHorizontal) {
            printf("Direita\n");
            h++;
        }

        if (v >= movVertical && h >= movHorizontal) {
            break; // encerra quando o movimento estiver completo
        }
    }
}

// =======================
// Programa Principal
// =======================
int main() {
    // Torre
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    // Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(5);
    printf("\n");

    // Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(5);
    printf("\n");

    // Cavalo
    printf("Movimento do Cavalo:\n");
    moverCavalo();
    printf("\n");

    return 0;
}

