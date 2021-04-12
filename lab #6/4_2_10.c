#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int tablicaA (int n, int tab[]) {
	int max = 0;

	for (int i = 0; i < n; i++) {
		if (tab[i] > max)
            max = tab[i];
	}

	return max;
}

int tablicaB (int n, int tab[]) {
	int min = INT_MAX;

	for (int i = 0; i < n; i++) {
		if (tab[i] < min)
            min = tab[i];
	}

	return min;
}


int tablicaC (int n, int tab[]) {
	int max = 0;
	int indeks = 0;

	for (int i = 0; i < n; i++) {
		if (tab[i] > max) {
            max = tab[i];
            indeks = i;
		}
	}

	return indeks;
}

int tablicaD (int n, int tab[]) {
	int min = INT_MAX;
	int indeks = 0;

	for (int i = 0; i < n; i++) {
		if (tab[i] < min) {
            min = tab[i];
            indeks = i;
		}
	}

	return indeks;
}

int tablicaE (int n, int tab[]) {
	int max = 0;

	for (int i = 0; i < n; i++) {
		if (abs(tab[i]) > max)
            max = abs(tab[i]);
	}

	return max;
}

int tablicaF (int n, int tab[]) {
	int max = 0;
	int indeks = 0;

	for (int i = 0; i < n; i++) {
		if (abs(tab[i]) > max) {
            max = abs(tab[i]);
            indeks = i;
		}
	}

	return indeks;
}

void pokaz (int n, int tab[]) {
	for (int i = 0; i < n; i++)
		printf("%i ", tab[i]);

	printf("\n");
}

int main ()
{
	int tab[3] = {1,-3,2};

	printf("A: %d\n",tablicaA(3,tab));
	printf("B: %d\n",tablicaB(3,tab));
	printf("C: %d\n",tablicaC(3,tab));
	printf("D: %d\n",tablicaD(3,tab));
	printf("E: %d\n",tablicaE(3,tab));
	printf("f: %d\n",tablicaF(3,tab));

	return 0;
}

