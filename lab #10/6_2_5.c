#include <stdio.h>
#include <stdlib.h>

int ***alokuj(int n, int m, int l) {
    int ***tab = malloc(n*sizeof(int **));

    for (int i = 0; i < n; i++) {
        *(tab+i) = malloc(m*sizeof(int*));

        for (int j = 0; j < m; j++)
            *(*(tab+i)+j) = malloc(l*sizeof(int));
    }

    return tab;
}

void foo(int ***tab, int n, int m, int l) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            free(*(*(tab+i)+j));
        }
        free(*(tab+i));
    }

    free(tab);
}

int main() {
    int n = 2, m = 3, l = 4;
    int ***tab = alokuj(n,m,l);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
                for (int k = 0; k < l; k++)
                    *(*(*(tab+i)+j)+k) = i+j+k;
        }
    }

    printf("%d\n", *(*(*(tab+1)+1)+1));
    foo(tab, n, m, l);
    return 0;
}
