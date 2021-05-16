#include <stdio.h>
#include <stdlib.h>

int suma(int tab[][100], int n) {
    int suma = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 100; j++)
            suma += tab[i][j];
    }

    return suma;
}

int main() {
    int n = 2;
    int tab[n][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 100; j++)
            tab[i][j] = 1;
    }

    printf("Suma: %d\n", suma(tab, n));
    return 0;
}
