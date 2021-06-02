#include <stdio.h>
#include <stdlib.h>

int **alokuj(int n, int m) {
    int **tab = malloc(n*sizeof(int *));

    for (int i = 0; i < n; i++)
        tab[i] = malloc(m*sizeof(int));

    return tab;
}

int suma(int **tab, int n, int m) {
    int suma = 0;
    int w = n;

    if (m < n)
        w = m;
    for (int i = 0; i < w; i++) {
        suma += tab[i][i];
        suma += tab[i][m-1-i];
    }
    return suma;
}

void pokazTT(int **tab, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (tab[i][j] < 0) {
                printf("%d ", tab[i][j]);
            }
            else {
                printf(" %d ", tab[i][j]);
            }
        }
        printf("\n");
    }
}

int main() {
    int **tab = alokuj(3,4);
    **tab = 2;
    *(*(tab)+1) = 3;
    *(*(tab)+2) = -2;
    *(*(tab)+3) = 8;
    *(*(tab+1)) = -1;
    *(*(tab+1)+1) = 8;
    *(*(tab+1)+2) = -4;
    *(*(tab+1)+3) = 3;
    *(*(tab+2)) = 3;
    *(*(tab+2)+1) = 5;
    *(*(tab+2)+2) = -2;
    *(*(tab+2)+3) = -9;

    pokazTT(tab,3,4);
    printf("\nSuma: %d\n", suma(tab,3,4));
    return 0;
}
