#include <stdio.h>
#include <stdlib.h>

typedef struct punktn {
    int w;
    float *tab;
} punkty;

void przepisz(punkty tab1[], punkty tab2[], int n) {
    for (int i = 0; i < n; i++) {
        tab2[i].w = tab1[i].w;
        tab2[i].tab = malloc(tab2[i].w * sizeof(float));

        for (int j = 0; j < tab2[i].w; j++)
            tab2[i].tab[j] = tab1[i].tab[j];
    }
}

int main() {
    punkty tab1;
    tab1.w = 3;
    tab1.tab = malloc(tab1.w * sizeof(float));
    tab1.tab[0] = 1;
    tab1.tab[1] = 2;
    tab1.tab[2] = 3;

    punkty tab2;
    tab2.w = 3;
    tab2.tab = malloc(tab2.w * sizeof(float));
    tab2.tab[0] = 0;
    tab2.tab[1] = 0;
    tab2.tab[2] = 7;

    punkty pkt1[2] = {tab1, tab2};
    punkty pkt2[2] = {tab1, tab1};

    printf("%f %f\n", pkt2[0].tab[2], pkt2[1].tab[2]);
    przepisz(pkt1, pkt2, 3);
    printf("Po zmianie:\n%f %f\n", pkt2[0].tab[2], pkt2[1].tab[2]);
    return 0;
}
