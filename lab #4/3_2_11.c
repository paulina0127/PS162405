#include <stdio.h>
#include <stdlib.h>


int* wsk(int n) {
    return malloc(n*sizeof(int));
}

int main() {
    printf("%p\n", wsk(5));
    return 0;
}
