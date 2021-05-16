#include <stdio.h>
#include <stdlib.h>

int **foo(int n, int m) {
    int **tab = malloc(n*sizeof(int *));

    for (int i = 0; i < n; i++)
        *(tab+i) = malloc(m*sizeof(int));

    return tab;
}

int main() {
    int **tab = foo(2,3);

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
            *(*(tab+i)+j) = i+j;
    }

    printf("%d\n", (**tab));
    printf("%d\n", (*(*tab+1)+2));
    return 0;
}
