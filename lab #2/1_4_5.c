#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,i,suma=0;
printf("Podaj liczbę całkowitą nieujamną.\n");
scanf("%d", &n);

for (i=0; i <= n; i++) {
    suma += i*i;
}

printf("Suma: %d\n", suma);

return 0;
}
