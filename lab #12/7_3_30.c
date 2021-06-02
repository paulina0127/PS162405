#include <stdio.h>
#include <stdlib.h>

typedef struct element {
    int i;
    struct element *next;
} element;

element *doklej(element *Lista1, element *Lista2) {
    element *temp = Lista1;

    if (temp == NULL)
        return Lista2;

    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = Lista2;
    return Lista1;
}

element *dodajkBez(element *Lista, int a);
void pokazBez(element *Lista);

int main() {
    element *Lista1 = NULL;
    Lista1 = dodajkBez(Lista1, 1);
    Lista1 = dodajkBez(Lista1, 2);
    Lista1 = dodajkBez(Lista1, 3);

    element *Lista2 = NULL;
    Lista2 = dodajkBez(Lista2, 4);
    Lista2 = dodajkBez(Lista2, 5);
    Lista2 = dodajkBez(Lista2, 6);

    pokazBez(Lista1);
    pokazBez(Lista2);
    element *ListaN = doklej(Lista1, Lista2);
    pokazBez(ListaN);
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
    wsk->i = a;
    wsk->next = NULL;
    return Lista;
}

void pokazBez(element *Lista) {
    element *temp = Lista;

    if(temp == NULL) {
        printf("Lista jest pusta.\n");
    }

    while(temp != NULL) {
        printf("%d\n", temp->i);
        temp = temp->next;
    }
    printf("***\n");
}
