#include <stdio.h>
#include <stdlib.h>

typedef struct Uczen {
    char imie[20];
    int wiek;
} Uczen;

int dlugosc(char *napis) {
    int znak = 0;

    for (int i = 0; napis[i] != '\0'; i++)
        znak++;

    return znak;
}

int foo(Uczen tab[], int n) {
    int najdl = dlugosc(tab[0].imie);

    for (int i = 0; i < n; i++) {
        if (dlugosc(tab[i].imie) > najdl)
            najdl = dlugosc(tab[i].imie);
    }
    return najdl;
}

int main() {
    Uczen uczen1 = {"Aleksandra",20};
    Uczen uczen2 = {"Jakub",20};
    Uczen tab[2] = {uczen1, uczen2};

    printf("Wynik: %d\n", foo(tab,2));
    return 0;
}
