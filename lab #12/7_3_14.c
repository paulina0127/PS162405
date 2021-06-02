#include <stdio.h>
#include <stdlib.h>

typedef struct element {
    int i;
    struct element *next;
} element;

void dodajw(element *Lista, element *elem, int a) {
    element *wsk = malloc(sizeof(element));
    wsk->i = a;

    wsk->next = elem->next;
    elem->next = wsk;
}

element *utworzZ();
void dodajkZ(element *Lista, int a);
void pokazZ(element *Lista);

int main() {
    element *lista = utworzZ();
    dodajkZ(lista,1);
    dodajkZ(lista,2);

    pokazZ(lista);
    dodajw(lista, lista->next, 3);
    pokazZ(lista);
    return 0;
}

element *utworzZ() {
    element *temp = malloc(sizeof(element));
    temp->next = NULL;
    return temp;
}

void dodajkZ(element *Lista, int a) {
    element *wsk = Lista;

    while (wsk->next != NULL) {
        wsk = wsk->next;
    }

    wsk->next = malloc(sizeof(element));
    wsk = wsk->next;
    wsk->i = a;
    wsk->next = NULL;
}

void pokazZ(element *Lista) {
    element *temp = Lista->next;
    if(temp == NULL) {
        printf("Lista jest pusta\n");
    }

    while(temp != NULL) {
        printf("%d\n", temp->i);
        temp = temp->next;
    }
    printf("***\n");
}
