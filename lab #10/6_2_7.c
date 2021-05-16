#include <stdio.h>
#include <stdlib.h>

int **alokuj(int n) {
    int **tab = malloc(n*sizeof(int *));

    for (int i = 0; i < n; i++) {
        *(tab+i) = malloc((i+1)*sizeof(int));
    }

    return tab;
}

int main() {
    int n = 3;
    int **tab = alokuj(n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            *(*(tab+i)+j) = i+j;
            printf("[%d, %d] - %d\n", i, j, *(*(tab+i)+j));
        }
    }

    return 0;
}
