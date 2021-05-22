#include <stdio.h>
#include <stdlib.h>

struct trojkat {
    float a, b, c;
};

float obw(struct trojkat tr) {
    return tr.a + tr.b + tr.c;
}

int main() {
    struct trojkat tr;
    tr.a = 3;
    tr.b = 4;
    tr.c = 5;

    printf("Obwód: %f\n", obw(tr));
    return 0;
}
