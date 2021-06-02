#include <stdio.h>
#include <stdlib.h>

typedef struct element {
    int i;
    struct element *next;
} element;

element *utworz() {
    element *temp = malloc(sizeof(element));
    temp->next = NULL;
    return temp;
}

int main() {
    element *lista = utworz();

    printf("%p\n", lista);
    return 0;
}

