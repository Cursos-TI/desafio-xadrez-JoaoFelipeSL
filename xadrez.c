#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    //Peça de xadrez Torre
    int torreCasas = 5;
    for (torreCasas ; torreCasas > 0 ; torreCasas--) {
        printf("Direita\n");
    }

    //Peça de xadrez Bispo
    int bispoCasas = 5;
    while (bispoCasas > 0)
    {
        printf("Direita, cimaz\n");
        bispoCasas--;
    }

    //Peça de xadrez Rainha
    int rainhaCasas = 8;
    do
    {
        printf("Esquerda\n");
        rainhaCasas--;
    } while (rainhaCasas > 0);
    

    return 0;
}
