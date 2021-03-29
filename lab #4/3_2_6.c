#include <stdio.h>
#include <stdlib.h>


void foo(int n, int *w) {
    *w = n;
}

int main() {
    int a, b;

    printf("Podaj dwie liczby.\n");
    scanf("%d\n%d", &a, &b);

    foo(a,&b);
    printf("Wynik: %d %d", a, b);
    return 0;
}
