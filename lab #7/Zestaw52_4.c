#include <stdio.h>
#include <stdlib.h>

int ciag(unsigned int n) {
    if (n <= 1)
        return 1;

    if (n % 3 == 0)
        return ciag((n/3)-1);

    if (n % 3 == 1)
        return ciag((n-1/3)-1) + 1;

    if (n % 3 == 2)
        return 5;
}

int main() {
    printf("A_3: %d\n",ciag(3));
    printf("A_5: %d\n",ciag(5));
    return 0;
}
