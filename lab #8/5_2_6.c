#include <stdio.h>
#include <stdlib.h>

void kopiujn1(char *nap1, char *nap2, int n) {
    int i;

    for (i = 0; i < n; i++) {
        if (nap1[i] != '\0')
            nap2[i] = nap1[i];
        else
            break;
    }

    nap2[i] = '\0';
}

void kopiujn2(wchar_t *nap1, wchar_t *nap2, int n) {
    int i;

    for (i = 0; i < n; i++) {
        if (nap1[i] != '\0')
            nap2[i] = nap1[i];
        else
            break;
    }

    nap2[i] = '\0';
}

int main() {
    char napis1[] = "domek";
    char napis2[] = "pilot";
    wchar_t napis3[] = L"domek";
    wchar_t napis4[] = L"pilot";

    kopiujn1(napis1,napis2,8);
    kopiujn2(napis3,napis4,3);

    printf("%s\n%s\n", napis1, napis2);
    wprintf(L"%s\n%s\n", napis3, napis4);
    return 0;
}
