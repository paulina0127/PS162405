#include <stdio.h>
#include <stdlib.h>

int ciag(int n)
{
if (n <= 1)
    return 1;
return 2*(ciag(n-1));
}

int main()
{
int n;

printf("Podaj nieujemną liczbę całkowitą.\n");
scanf("%d", &n);
printf("Wynik: %d\n",ciag(n));
return 0;
}
