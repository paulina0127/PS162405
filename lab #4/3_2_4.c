#include <stdio.h>
#include <stdlib.h>


void foo(int *a, int *b) {
    if (*a > *b) {
        int x = *a;
        *a = *b;
        *b = x;
    }
}

int main() {
    int a, b;

    printf("Podaj dwie liczby.\n");
    scanf("%d\n%d", &a, &b);

    foo(&a,&b);
    printf("Wynik: %d %d", a, b);
    return 0;
}
