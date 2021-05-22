#include <stdio.h>
#include <stdlib.h>

enum zwierzak {
    pies, kot, chomik, papuga, krolik
};

int main() {
    enum zwierzak zwierze;
    zwierze = kot;
    printf("%d\n", zwierze);
    return 0;
}
