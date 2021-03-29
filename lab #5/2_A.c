#include <stdio.h>
#include <stdlib.h>

int ciag(int n) {
    if (n <= 1)
        return 2;

    if (n % 2 == 0)
        return ciag(n-1) + n;

    if (n % 2 != 0)
        return 2 * ciag(n-1) - n;
}

int main() {
    printf("A_1: %d\n",ciag(1));
    printf("A_2: %d\n",ciag(2));
    printf("A_3: %d\n",ciag(3));
    return 0;
}
