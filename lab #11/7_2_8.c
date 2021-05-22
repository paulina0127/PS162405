#include <stdio.h>
#include <stdlib.h>

typedef struct student {
    char imie[20];
    char nazwisko[20];
    char adres[30];
    char pesel[12];
    char kierunek[20];
    char nr_leg[7];
} student;

void wczytaj(student *std) {
    printf("Podaj imię: ");
    scanf("%s", std->imie);

    printf("Podaj nazwisko: ");
    scanf("%s", std->nazwisko);

    printf("Podaj adres: ");
    scanf("%s", std->adres);

    printf("Podaj pesel: ");
    scanf("%s", std->pesel);

    printf("Podaj kierunek studiów: ");
    scanf("%s", std->kierunek);

    printf("Podaj numer legitymacji: ");
    scanf("%s", std->nr_leg);
}

int main() {
    student Paulina;
    wczytaj(&Paulina);

    printf("\nImię: %s\nNazwisko: %s\nAdres: %s\nPesel: %s\nKierunek: %s\nNr legitymacji: %s\n",
           Paulina.imie, Paulina.nazwisko, Paulina.adres, Paulina.pesel, Paulina.kierunek,           Paulina.nr_leg);
    return 0;
}
