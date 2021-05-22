#include <stdio.h>
#include <stdlib.h>

typedef struct punkt10 {
    float tab[10];
} punkty;

void przepisz(punkty tab1[], punkty tab2[], int n) {
    for (int i = 0; i < n; i++) {
        tab2[i] = tab1[i];
    }
}

int main() {
    punkty tab1[] = {{1,2,3,4,5,6,7,8,9,10}, {4,5,3,17,14,18,2,1,0,8}, {8,6,1,4,2,0,15,7,12,10}};
    punkty tab2[] = {{1,1,1,1,1,1,1,1,1,1}, {1,1,1,1,1,1,1,1,1,1}, {1,1,1,1,1,1,1,1,1,1}};

    printf("%f\n", tab2[2].tab[9]);
    przepisz(tab1, tab2, 3);
    printf("Po zmianie:\n%f\n", tab2[2].tab[9]);
    return 0;
}
