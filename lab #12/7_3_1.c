#include <stdio.h>
#include <stdlib.h>

typedef struct element {
    int i;
    struct element *next;
} element;

element *utworz() {
    return NULL;
}

int main() {
    element *lista = utworz();

    printf("%p\n", lista);
    return 0;
}
