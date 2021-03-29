#include <stdio.h>
#include <stdlib.h>


void zamiana(int *a, int *b) {
    int x = *a;
    *a = *b;
    *b = x;
}

int main() {
    int a, b;

    printf("Podaj dwie liczby całkowite.\n");
    scanf("%d\n%d", &a, &b);

    printf("Liczby: %d %d\n", a, b);
    zamiana(&a,&b);
    printf("Liczby po zamianie: %d %d\n", a, b);
    return 0;
}
