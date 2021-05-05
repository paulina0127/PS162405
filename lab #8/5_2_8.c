#include <stdio.h>
#include <stdlib.h>

void podmien(char *napis) {
    for (int i = 0; napis[i] != '\0'; i++) {
        if (napis[i] >= 'a' && napis[i] <= 'z')
            napis[i] -= ('a' - 'A');
    }
}

int main() {
    char napis[] = "dom";

    podmien(napis);

    printf("%s\n", napis);
    return 0;
}
