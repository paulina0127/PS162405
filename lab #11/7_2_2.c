#include <stdio.h>
#include <stdlib.h>

struct trojkat {
    float a, b, c;
};

void przepisz(struct trojkat troj1, struct trojkat *troj2) {
    *troj2 = troj1;
}

int main() {
    struct trojkat tr1;
    tr1.a = 3;
    tr1.b = 4;
    tr1.c = 5;

    struct trojkat tr2;
    tr2.a = 1;
    tr2.b = 2;
    tr2.c = 3;

    struct trojkat *wsk = &tr2;

    printf("%f %f %f\n", tr2.a, tr2.b, tr2.c);
    przepisz(tr1, wsk);
    printf("Po zmianie:\n%f %f %f\n", tr2.a, tr2.b, tr2.c);
    return 0;
}
