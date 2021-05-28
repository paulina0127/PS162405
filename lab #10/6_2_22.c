#include <stdio.h>
#include <stdlib.h>

void odwroc(int n, int m, int tab[][m]) {
    int temp = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m/2; j++) {
            temp = tab[i][j];
            tab[i][j] = tab[i][m-1-j];
            tab[i][m-1-j] = temp;
        }
    }
}

void pokaz(int n, int m, int tab[][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("[%d, %d] - %d\n", i, j, tab[i][j]);
        }
    }
}

int main() {
    int w = 2, k = 3;
    int tab[w][k];

    for (int i = 0; i < w; i++) {
        for (int j = 0; j < k; j++) {
            tab[i][j] = i+j;
            printf("[%d, %d] - %d\n", i, j, tab[i][j]);
        }
    }

    odwroc(w,k,tab);
    printf("\nPo zamianie:\n");
    pokaz(w,k,tab);
    return 0;
}
