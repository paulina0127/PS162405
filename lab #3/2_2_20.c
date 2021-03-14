#include <stdio.h>
#include <stdlib.h>

int silnia(int n)
{
if (n <= 1)
    return 1;
return silnia(n-1)*n;
}

int main()
{
int n;

printf("Podaj nieujemną liczbę całkowitą.\n");
scanf("%d", &n);
printf("Wynik: %d\n", silnia(n));
return 0;
}
