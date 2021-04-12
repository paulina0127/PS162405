#include <stdio.h>
#include <stdlib.h>

int potega(int a, int n) {
    int i, w=1;

    for(i = 1; i <= n; i++)
        w *= a;

    return w;
}

float tablica(int n, unsigned int tab[]) {
    int srednia = 1;
    float wynik = 0;
    for (int i = 0; i < n; i++)
            srednia *= tab[i];

    for (int j = 0; potega(j,n) <= srednia; j++)
            wynik = j;

    return wynik;
}

int main() {
    unsigned int tab[3] = {1,3,9};

    printf("Średnia geometryczna: %f",tablica(3,tab));
}
