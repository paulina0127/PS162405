#include <stdio.h>
#include <stdlib.h>


int silnia(int n)
{
int i,w=1;

for (i = 1; i <= n; i++) {
    w *= i;
}
return w;
}

int main()
{
int n;

printf("Podaj nieujemną liczbę całkowitą.\n");
scanf("%d", &n);
printf("Silnia: %d\n", silnia(n));

return 0;
}
