#include <stdio.h>
#include <stdlib.h>
#include "color.h"
#include <time.h>

/* Couleurs ----------------------------------------------------------------*/

/*
0 : Noir
1 : Rouge
2 : Vert
3 : Jeune
4 : Bleu
5 : Magenta
6 : Cyan
7 : Blanc
8 : Noir Clair
9 : Rouge Clair
10 : Vert Clair
11 : Jeune Clair
12 : Bleu Clair
13 : Magenta Clair
14 : Cyan Clair
15 : Blanc Clair

-1 : Réinitialisé
1 : Couleur Clair
4 : Souligné
*/

// Afficher les couleurs en console
void color_test() {
    for (int i = 0; i < 16; i++) {
        for (int j = 0; j < 16; j++) {
            color(i, j);
            printf("(%2d,%2d)", i, j);
            color(15, 0);
        }
        printf("\n");
    }
}

/* Clear ----------------------------------------------------------------*/

// Vider la console
void console_clear() {
    system("cls");
}

/* Détection du clavier ----------------------------------------------------------------*/

// Attente de saisie au clavier
void key_wait_detection() {
    int c = 0;
    while (!(c == 27)) {
        printf("ok");
        c = getch();
        printf("%d\n", c);
    }
}

// Détection en continu du clavier
void key_always_detection() {
    printf("Enter key ESC to exit \n");
    int c = 0;
    while (!(c == 27)) {
        if (kbhit()) {
            c = getch();
            if (c == 8) {
                console_clear();
            }
            else {
                printf("Char : %c | Dec : %d\n", c, c);
            }
        }
    }
}

/* Gestion du temps ----------------------------------------------------------------*/

// Fonction pour attendre
void wait(float time) {
    float start = clock();
    float end = 0;
    while (!((end - start) / CLOCKS_PER_SEC == time)) {
        end = clock();
    }
}

/*----------------------------------------------------------------*/

int main() {

    printf("message 1\n");
    wait(1);
    printf("message 2\n");

    return 0;
}