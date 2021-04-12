#include <stdio.h>
#include <stdlib.h>


void tablicaA(int n, int tab[]) {
    for (int i = 0; i < n; i++)
        tab[i] = 0;
}

void tablicaB(int n, int tab[]) {
    for (int i = 0; i < n; i++)
        tab[i] = i;
}

void tablicaC(int n, int tab[]) {
    for (int i = 0; i < n; i++)
        tab[i] *= 2;
}

void tablicaD(int n, int tab[]) {
    for (int i = 0; i < n; i++) {
        if (tab[i] < 0)
            tab[i] *= -1;
    }
}

int main() {
    int tab[3] = {3,2,-1};

    printf("D: ");
    tablicaD(3,tab);
    for (int i = 0; i < 3; i++)
        printf("%d ", tab[i]);

    printf("\nA: ");
    tablicaA(3,tab);
    for (int i = 0; i < 3; i++)
        printf("%d ", tab[i]);

    printf("\nB: ");
    tablicaB(3,tab);
    for (int i = 0; i < 3; i++)
        printf("%d ", tab[i]);

    printf("\nC: ");
    tablicaC(3,tab);
    for (int i = 0; i < 3; i++)
        printf("%d ", tab[i]);

    return 0;
}
