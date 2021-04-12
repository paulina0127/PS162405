#include <stdio.h>
#include <stdlib.h>

double *tablica(int n) {
    return malloc(n * sizeof(double));
}

int main() {
    printf("%d",tablica(3));
    return 0;
}
