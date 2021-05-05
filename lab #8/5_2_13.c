#include <stdio.h>
#include <stdlib.h>

void wytnijtm1(char *nap1, char *nap2) {
    int j = 0;

    for (int i = 0; nap1[i] != '\0'; i++) {
        if (nap1[i] != nap2[i]) {
            nap1[j] = nap1[i];
            j++;
        }
    }

    nap1[j] = '\0';
}

void wytnijtm2(wchar_t *nap1, wchar_t *nap2) {
    int j = 0;

    for (int i = 0; nap1[i] != '\0'; i++) {
        if (nap1[i] != nap2[i]) {
            nap1[j] = nap1[i];
            j++;
        }
    }

    nap1[j] = '\0';
}

int main() {
    char napis1[] = "domek";
    char napis2[] = "kotek";
    wchar_t napis3[] = L"domek";
    wchar_t napis4[] = L"kotek";

    printf("%s\n%s\n", napis1, napis2);
    wytnijtm1(napis1,napis2);
    printf("%s\n\n",napis1);

    wprintf(L"%s\n%s\n",napis3,napis4);
    wytnijtm2(napis3,napis4);
    wprintf(L"%s\n",napis3);
    return 0;
}
