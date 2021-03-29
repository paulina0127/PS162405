#include <stdio.h>
#include <stdlib.h>


void foo(int const *n, int* const m) {
    *m = *n;
}

int main() {
    const int a = 5;
    int b = 3;

    printf("A: %p\n", a);
    printf("B: %p\n", b);

    foo(&a,&b);
    printf("\n");

    printf("A: %p\n", a);
    printf("B: %p\n", b);
    return 0;
}

