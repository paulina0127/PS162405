#include <stdio.h>
#include <stdlib.h>

int foo(int n, int tab1[], int tab2[]) {
    int suma = 0;

    for (int i = 0; i < n; i++) {
        if (tab1[i] == tab2[i])
            suma += 1;
    }

    return suma;
}

int main() {
    int tab1[5] = {2,4,-2,3,5};
    int tab2[5] = {2,0,-2,3,1};
    int tab3[5] = {5,2,-3,1,0};

    printf("Liczba indeksów: %d\n",foo(5,tab1,tab2));
    printf("Liczba indeksów: %d\n",foo(5,tab1,tab3));
    return 0;
}
