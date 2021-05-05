#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void podmien1(char *napis) {
    for (int i = 0; napis[i] != '\0'; i++) {
        if (napis[i] >= 'a' && napis[i] <= 'z')
            napis[i] = toupper(napis[i]);
    }
}

void podmien2(wchar_t *napis) {
    for (int i = 0; napis[i] != '\0'; i++) {
        if (napis[i] >= 'a' && napis[i] <= 'z')
            napis[i] = toupper(napis[i]);
    }
}

int main() {
    char napis1[] = "dom";
    wchar_t napis2[] = L"kwiat";

    podmien1(napis1);
    podmien2(napis2);

    printf("%s\n", napis1);
    wprintf(L"%s\n", napis2);
    return 0;
}
