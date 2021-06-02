#include <stdio.h>
#include <stdlib.h>

typedef struct element {
    int i;
    struct element *next;
} element;

element *dodajw(element *Lista, element *elem, int a) {
    element *wsk = malloc(sizeof(element));
    wsk->i = a;

    if (elem == NULL) {
        wsk->next = Lista;
        Lista = wsk;
    }
    else {
        wsk->next = elem->next;
        elem->next = wsk;
    }
    return Lista;
}

void pokazBez(element *Lista) {
    element *temp = Lista;

    if(temp == NULL) {
        printf("Lista jest pusta\n");
    }

    while(temp != NULL) {
        printf("%d\n", temp->i);
        temp = temp->next;
    }
    printf("***\n");
}

int main() {
    element *lista = NULL;

    pokazBez(lista);
    lista = dodajw(lista, NULL, 5);
    pokazBez(lista);
    lista = dodajw(lista, lista, 10);
    pokazBez(lista);
    return 0;
}
