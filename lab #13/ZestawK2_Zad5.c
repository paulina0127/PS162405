#include <stdio.h>
#include <stdlib.h>

typedef struct element {
    int x;
    struct element *next;
} element;

int max(element *Lista) {
    element *temp = Lista;
    int max = temp->x;

    if(temp == NULL) {
        return 0;
    }

    while(temp != NULL) {
        if (temp->x > max)
            max = temp->x;
        temp = temp->next;
    }
    return max;
}

int porownaj(element *Lista1, element *Lista2) {
    if (Lista1 == NULL || Lista2 == NULL) {
        return 0;
    }
    else if (max(Lista1) == max(Lista2)) {
        return 1;
    }
    return 0;
}

element *dodajkBez(element *Lista, int a);

int main() {
    element *lista1 = NULL;
    lista1 = dodajkBez(lista1, 1);
    lista1 = dodajkBez(lista1, 2);
    lista1 = dodajkBez(lista1, 77);
    element *lista2 = NULL;
    lista2 = dodajkBez(lista2, 4);
    lista2 = dodajkBez(lista2, 5);
    lista2 = dodajkBez(lista2, 77);

    printf("Wynik: %d\n", porownaj(lista1,lista2));
    return 0;
}

element *dodajkBez(element *Lista, int a) {
    element *wsk ;
    if(Lista == NULL) {
        wsk = malloc(sizeof(element));
        Lista = wsk;
    }
    else {
        wsk = Lista;
        while(wsk->next != NULL) {
            wsk = wsk->next;
        }
        wsk->next = malloc(sizeof(element));
        wsk = wsk->next;
    }
    wsk->x = a;
    wsk->next = NULL;
    return Lista;
}
