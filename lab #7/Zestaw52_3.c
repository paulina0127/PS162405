#include <stdio.h>
#include <stdlib.h>

double *foo() {
    double *a = malloc(2*sizeof(double));
    a[0] = 5.2;
    a[1] = -4.2;
    return a;
}

int main() {
    double *a = foo();
    printf("%lf\n", *a);
    return 0;
}
