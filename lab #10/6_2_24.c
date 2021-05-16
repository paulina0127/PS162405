#include <stdio.h>
#include <stdlib.h>

void przepisz(int **tab, int n, int m) {
    int temp = 0;

    for (int i = 0; i < n; i++) {
        temp = *(*(tab+i)+(m-1));
        for (int j = m-1; j > 0; j--) {
            *(*(tab+i)+j) = *(*(tab+i)+(j-1));
        }
        *(*(tab+i)+0) = temp;
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
    int w = 2, k = 3;
    int **tab = alokuj(w,k);

    for (int i = 0; i < w; i++) {
        for (int j = 0; j < k; j++) {
            *(*(tab+i)+j) = i+j;
            printf("[%d, %d] - %d\n", i, j, *(*(tab+i)+j));
        }
    }

    przepisz(tab,w,k);
    printf("\nPo zamianie:\n");
    pokaz(tab,w,k);
    return 0;
}

