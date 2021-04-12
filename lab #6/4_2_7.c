#include <stdio.h>

void tablicaA (int n, int tab1[], int tab2[], int tab3[]) {
	for (int i = 0; i < n; i++)
        tab3[i] = tab1[i] + tab2[i];
}

void tablicaB (int n, int tab1[], int tab2[], int tab3[]) {
    for (int i = 0; i < n; i++) {
		if (tab1[i] < tab2[i]) {
			tab3[i] = tab2[i];
		}
		else {
			tab3[i] = tab1[i];
		}
	}
}

void tablicaC (int n, int tab1[], int tab2[], int tab3[]) {
	int temp;

	for (int i = 0; i < n; i++) {
		temp = tab2[i];
		tab2[i] = tab1[i];
		tab1[i] = tab3[i];
		tab3[i] = temp;
	}
}

void pokaz (int n, int tab[]) {
	for (int i = 0; i < n; i++)
		printf("%i ", tab[i]);

	printf("\n");
}

int main() {
	int tab1[3] = {1,2,6};
	int tab2[3] = {4,5,3};
	int tab3[3] = {7,8,9};

	tablicaA(3,tab1,tab2,tab3);
	printf("A: ");
	pokaz(3,tab3);

	tablicaB(3,tab1,tab2,tab3);
	printf("B: ");
	pokaz(3,tab3);

	tablicaC(3,tab1,tab2,tab3);
	printf("C: ");
	pokaz(3,tab1);
	pokaz(3,tab2);
	pokaz(3,tab3);

	return 0;
}
