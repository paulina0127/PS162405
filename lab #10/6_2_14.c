#include <stdio.h>
#include <stdlib.h>

int suma(int tab[][100][100]) {
    int suma = 0;

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            for (int k = 0; k < 100; k++) {
                suma += tab[i][j][k];
            }
        }
    }

    return suma;
}

int main() {
    int n = 100;
    int tab[n][n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                tab[i][j][k] = 1;
            }
        }
    }

    printf("Suma: %d\n", suma(tab));
    return 0;
}
