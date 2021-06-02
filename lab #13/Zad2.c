#include <stdio.h>
#include <stdlib.h>

int dlugosc(char *napis) {
    int znak = 0;

    for (int i = 0; napis[i] != '\0'; i++)
        znak++;

    return znak;
}

int nap(char *napis1, char *napis2, int n) {
    if (dlugosc(napis1) < n || dlugosc(napis2) < n)
        return 0;

    if (napis1[n] < napis2[n])
        return 1;

    return 0;
}

int main() {
    char napis1[] = "dom";
    char napis2[] = "kwiat";

    printf("Wynik: %d\n", nap(napis1,napis2,1));
    return 0;
}
