#include <stdio.h>
#include <stdlib.h>

int potega(int a, int n)
{

int i, w=1;

for(i = 1; i <= n; i++) {
    w *= a;
}
return w;
}

int suma(int n, int m)
{
int i, j, w=0, suma=0;

for (i = 0; i <= n; i++) {
    for (j = 0; potega(j,m) <= i; j++) {
        w = j;
    }
    suma += w;
}
return suma;
}

int main()
{
int n, m;

printf("Podaj dwie nieujemne liczby całkowite.\n");
scanf("%d\n%d", &n, &m);
printf("Suma: %d\n",suma(n,m));
return 0;
}
