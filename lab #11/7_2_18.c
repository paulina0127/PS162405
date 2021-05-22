#include <stdio.h>
#include <stdlib.h>

union tab_int {
    unsigned int d;
    unsigned char tab[sizeof(unsigned int)];
};

int main() {
    union tab_int un = {255};

    printf("%X %X %X %X\n", un.tab[0], un.tab[1], un.tab[2], un.tab[2]);
    return 0;
}
