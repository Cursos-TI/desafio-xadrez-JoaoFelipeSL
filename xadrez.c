#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


//Função Recursiva do cavalo
int cavalo() {
}

//Função recursiva do Bispo
void bispo(int passos) {
    if (passos <= 0) {
        return; 
    }

    for (int i = 0; i < passos; i++) {
        printf("Direita, cima\n");
    }

    bispo(passos - 1);
}
//Função recursiva da Torre
void torre(int casas) {
    if (casas <= 0) {
        return; // condição de parada
    }

    printf("Direita\n");
    torre(casas - 1); // recursão
}
//Função recursiva da Rainha
void rainha(int casas) {
    if (casas <= 0) {
        return; // condição de parada
    }

    printf("Esquerda\n");
    rainha(casas - 1); // recursão
}


int main() {

    //Peça de xadrez Bispo
    printf("Movimento do Bispo:\n");
    bispo(5);

    //Peça de xadrez Torre
    printf("Movimento da Torre:\n");
    torre(5);

    //Peça de xadrez Rainha
    printf("\nMovimento da Rainha:\n");
    rainha(8);

    //Peça de xadrez Cavalo
    printf("\nMovimento do Cavalo:\n");
    int cavaloCasas1;
    int cavaloCasas2;

    for (int i = 1; i<=2; i++) {
        printf("cima cavalo\n");
        if (i == 2) {
            for (int j = 1; j<=1; j++) {
                printf("Direita cavalo\n");
            }
            
        }
    }

    
}