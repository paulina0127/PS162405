#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct trojkat {
    float a, b, c, pole;
} trojkat;

typedef struct element {
    trojkat i;
    struct element *next;
} element;

void poleBez(element *Lista) {
    element *wsk = Lista;

    while (wsk != NULL) {
        float p = (wsk->i.a + wsk->i.b + wsk->i.c)/2;
        float pole = sqrt(p * (p-wsk->i.a) * (p-wsk->i.b) * (p-wsk->i.c));
        wsk->i.pole = pole;
        wsk = wsk->next;
    }
}

void poleZ(element *Lista) {
    element *wsk = Lista->next;

    while (wsk != NULL) {
        float p = (wsk->i.a + wsk->i.b + wsk->i.c)/2;
        float pole = sqrt(p * (p-wsk->i.a) * (p-wsk->i.b) * (p-wsk->i.c));
        wsk->i.pole = pole;
        wsk = wsk->next;
    }
}

element *utworzZ();
void pokazBez(element *Lista);
void pokazZ(element *Lista);

int main() {
    //Bez głowy
    element *Lista1 = NULL;
    element *wsk1 = malloc(sizeof(element));
    wsk1->i.a = 3;
    wsk1->i.b = 4;
    wsk1->i.c = 5;
    wsk1->next = NULL;
    Lista1 = wsk1;

    pokazBez(Lista1);
    poleBez(Lista1);
    pokazBez(Lista1);

    //Z głową
    element *Lista2 = utworzZ();
    element *wsk2 = malloc(sizeof(element));
    wsk2->i.a = 3;
    wsk2->i.b = 4;
    wsk2->i.c = 5;
    wsk2->next = NULL;
    Lista2->next = wsk2;

    pokazZ(Lista2);
    poleZ(Lista2);
    pokazZ(Lista2);
    return 0;
}

element *utworzZ() {
    element *temp = malloc(sizeof(element));
    temp->next = NULL;
    return temp;
}

void pokazBez(element *Lista) {
    element *temp = Lista;

    if(temp == NULL) {
        printf("Lista jest pusta.\n");
    }

    while(temp != NULL) {
        printf("Boki: %f, %f, %f\nPole: %f\n", temp->i.a, temp->i.b, temp->i.c, temp->i.pole);
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
        printf("Boki: %f, %f, %f\nPole: %f\n", temp->i.a, temp->i.b, temp->i.c, temp->i.pole);
        temp = temp->next;
    }
    printf("***\n");
}
