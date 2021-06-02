#include <stdio.h>
#include <stdlib.h>

typedef struct element {
    int i;
    struct element *next;
} element;

void usunw(element *Lista, element *elem) {
    element *wsk;

    while((Lista->next != NULL) && (Lista->next != elem)) {
        Lista = Lista->next;
    }

    wsk = Lista->next;
    Lista->next = wsk->next;
    free(wsk);
}

element *utworzZ();
void dodajkZ(element *Lista, int a);
void pokazZ(element *Lista);

int main() {
    element *lista = utworzZ();
    dodajkZ(lista,1);
    dodajkZ(lista,2);
    dodajkZ(lista,3);

    pokazZ(lista);
    usunw(lista, lista->next->next);
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
