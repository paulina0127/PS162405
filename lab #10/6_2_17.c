#include <stdio.h>
#include <stdlib.h>

int **alokuj(int n, int m) {
    int **tab = malloc(n*sizeof(int *));

    for (int i = 0; i < n; i++) {
        *(tab+i) = malloc(m*sizeof(int));
    }

    return tab;
}

float srednia(int **tab, int n, int m) {
    float avg = 0;
    float max_avg = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            avg += *(*(tab+i)+j);
        }
        avg = avg/m;

        if (avg > max_avg) {
            max_avg = avg;
        }
        avg = 0;
    }

    return max_avg;
}

int main() {
    int w = 3, k = 3;
    int **tab = alokuj(w,k);

    for (int i = 0; i < w; i++) {
        for (int j = 0; j < k; j++) {
            *(*(tab+i)+j) = i+j;
            printf("[%d, %d] - %d\n", i, j, (*(*(tab+i)+j)));
        }
    }

    printf("Największa średnia: %f\n", srednia(tab,w,k));
    return 0;
}
