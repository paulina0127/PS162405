#include <stdio.h>
#include <stdlib.h>


int pot(int n)
{
int i,w=1;

for (i = 1; i <= n; i++) {
    w *= 2;
}
return w;
}

int main()
{
int n;

printf("Podaj nieujemną liczbę całkowitą.\n");
scanf("%d", &n);
printf("Wynik: %d\n", pot(n));

return 0;
}
