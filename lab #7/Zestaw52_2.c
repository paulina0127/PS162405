#include <stdio.h>
#include <stdlib.h>

int foo(int n, int m, int k) {
    int suma = 0;

    for (int i = 0; i <= k; i++) {
        if (i * n > m && i * n < k)
            suma += (i * n);
    }

    return suma;
}

int main() {
    printf("Suma: %d\n",foo(4,1,15));
    printf("Suma: %d\n",foo(1,5,20));
    return 0;
}
