#include <stdio.h>
#include <stdlib.h>


double* wsk(int n) {
    return malloc(n*sizeof(double));
}

int main() {
    printf("%p\n", wsk(10));
    return 0;
}
