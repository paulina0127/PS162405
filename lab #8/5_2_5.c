#include <stdio.h>
#include <stdlib.h>

void przepisz1(char *napis1, char *napis2) {
    int i;

    for (i = 0; napis1[i] != '\0'; i++)
        napis2[i] = napis1[i];

    napis2[i] = '\0';
}

void przepisz2(wchar_t *napis1, wchar_t *napis2) {
    int i;

    for (i = 0; napis1[i] != '\0'; i++)
        napis2[i] = napis1[i];

    napis2[i] = '\0';
}

int main() {
    char napis1[] = "dom";
    char napis2[] = "pilot";
    wchar_t napis3[] = L"dom";
    wchar_t napis4[] = L"pilot";

    przepisz1(napis1,napis2);
    przepisz2(napis3,napis4);

    printf("%s\n%s\n", napis1, napis2);
    wprintf(L"%s\n%s\n",napis3,napis4);
    return 0;
}
