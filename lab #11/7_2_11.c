#include <stdio.h>
#include <stdlib.h>

typedef union Liczba {
    int d;
    float f;
} Liczba;

typedef struct Dane {
    int tp;
    Liczba zaw;
} Dane;

Dane wczytaj() {
    Dane dane;
    printf("Podaj numer liczby, którą chcesz wpisać.\n0 - liczba całkowita\n1 - liczba wymierna\n");
    scanf("%d", &dane.tp);

    if (dane.tp == 0) {
        printf("\nPodaj liczbę całkowitą.\n");
        scanf("%d", &dane.zaw.d);
    }
    if (dane.tp == 1) {
        printf("\nPodaj liczbę wymierną.\n");
        scanf("%f", &dane.zaw.f);
    }

    return dane;
}

int main() {
    Dane licz = wczytaj();

    if (licz.tp == 0) {
        printf("\nLiczba: %d\n", licz.zaw.d);
    }
    if (licz.tp == 1) {
        printf("\nLiczba: %f\n", licz.zaw.f);
    }

    return 0;
}
