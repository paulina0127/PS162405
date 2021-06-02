#include <stdio.h>
#include <stdlib.h>


typedef struct element {
    int i;
    struct element *next;
} element;

element *minimumBez(element *Lista) {
    element *min = Lista;

    while (Lista != NULL) {
        if (Lista->i < min->i)
            min = Lista;
        Lista = Lista->next;
    }
    return min;
}

element *minimumZ(element *Lista) {
    element *temp = Lista->next;
    element *min = Lista->next;

    while (temp != NULL) {
        if (temp->i < min->i)
            min = temp;
        temp = temp->next;
    }
    return min;
}

element *utworzZ();
element *dodajkBez(element *Lista, int a);
void dodajkZ(element *Lista, int a);
void pokazBez(element *Lista);
void pokazZ(element *Lista);

int main() {
    element *Lista1 = NULL;
    Lista1 = dodajkBez(Lista1, 2);
    Lista1 = dodajkBez(Lista1, 1);
    Lista1 = dodajkBez(Lista1, 3);

    element *Lista2 = utworzZ();
    dodajkZ(Lista2, 5);
    dodajkZ(Lista2, 2);
    dodajkZ(Lista2, 10);

    pokazBez(Lista1);
    pokazZ(Lista2);
    printf("\nBez: %d\n", minimumBez(Lista1)->i);
    printf("Z: %d\n", minimumZ(Lista2)->i);
    return 0;
}

element *utworzZ() {
    element *temp = malloc(sizeof(element));
    temp->next = NULL;
    return temp;
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

void pokazZ(element *Lista) {
    element *temp = Lista->next;

    if (temp == NULL) {
        printf("Lista jest pusta.\n");
    }

    while (temp != NULL) {
        printf("%d\n", temp->i);
        temp = temp->next;
    }
    printf("***\n");
}
