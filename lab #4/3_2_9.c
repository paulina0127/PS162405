#include <stdio.h>
#include <stdlib.h>


int* wsk() {
    return malloc(sizeof(int));
}

int main() {
    printf("%p\n", wsk());
    return 0;
}
