#include <stdio.h>

void tablicaA (int n, int tab[]) {
	int temp;

	for (int i = 0; i < n/2; i++) {
		temp = tab[i];
		tab[i] = tab[n - 1 - i];
		tab[n - 1 - i] = temp;
	}
}

void tablicaB (int n, int tab[]) {
	int temp = tab[0];

	for (int i = 0; i < n - 1; i++) {
		tab[i] = tab[i + 1];
	}

	tab[n - 1] = temp;
}


void tablicaC (int n, int tab[]) {
	int temp = tab[n - 1];

	for (int i = n - 1; i > 0; i--)
		tab[i] = tab[i - 1];

	tab[0] = temp;
}

void tablicaD (int n, int tab[]) {
	int temp;

	for (int j = 0; j < n; j++) {
		for (int i = 0; i < n - 1; i++) {
			if (tab[i] > tab[i + 1]) {
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
		}
	}
}

void tablicaE (int n, int tab[]) {
	int temp;

	for (int j = 0; j < n; j++) {
		for (int i = 0; i < n - 1; i++) {
			if (tab[i] < tab[i + 1] ) {
				temp = tab[i] ;
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
		}
	}
}

void pokaz (int n, int tab[]) {
	for (int i = 0; i < n; i++)
		printf("%i ", tab[i]);

	printf("\n");
}

int main ()
{
	int tab[3] = {1,2,3};

	tablicaA(3,tab);
	printf("A: ");
	pokaz(3,tab);

	tablicaB(3,tab);
	printf("B: ");
	pokaz(3,tab);

	tablicaC(3,tab);
	printf("C: ");
	pokaz(3,tab);

	tablicaD(3,tab);
	printf("D: ");
	pokaz(3,tab);

	tablicaE(3,tab);
	printf("E: ");
	pokaz(3,tab);

	return 0;
}
