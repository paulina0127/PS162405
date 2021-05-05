#include <stdio.h>
#include <stdlib.h>

int dlugosc1(char *napis) {
    int znak = 0;

    for (int i = 0; napis[i] != '\0'; i++)
        znak++;

    return znak;
}

int dlugosc2(wchar_t *napis) {
    int znak = 0;

    for (int i = 0; napis[i] != '\0'; i++)
        znak++;

    return znak;
}

int main() {
    printf("Długość napisu: %d\n", dlugosc1("napis"));
    printf("Długość napisu: %d\n", dlugosc2(L"napis"));
    return 0;
}
