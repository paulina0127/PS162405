#include <stdio.h>
#include <stdlib.h>

void odwroc(int **tab, int n, int m) {
    int temp = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m/2; j++) {
            temp = (*(*(tab+i)+j));
            *(*(tab+i)+j) = *(*(tab+i)+(m-1-j));
            *(*(tab+i)+(m-1-j)) = temp;
        }
    }
}

int **alokuj(int n, int m) {
    int **tab = malloc(n*sizeof(int *));

    for (int i = 0; i < n; i++) {
        *(tab+i) = malloc(m*sizeof(int));
    }

    return tab;
}

void pokaz(int **tab, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("[%d, %d] - %d\n", i, j, *(*(tab+i)+j));
        }
    }
}

int main() {
    int w = 2, k = 4;
    int **tab = alokuj(w,k);

    for (int i = 0; i < w; i++) {
        for (int j = 0; j < k; j++) {
            *(*(tab+i)+j) = i+j;
            printf("[%d, %d] - %d\n", i, j, *(*(tab+i)+j));
        }
    }

    odwroc(tab,w,k);
    printf("\nPo zamianie:\n");
    pokaz(tab,w,k);
    return 0;
}
