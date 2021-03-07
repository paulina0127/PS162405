#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,m,i,w=1;
printf("Podaj pierwszą liczbę całkowitą i drugą liczbę od niej większą.\n");
scanf("%d\n%d", &n, &m);

for (i = n; i <= m; i++) {
    w *= i;
}

printf("Wynik: %d\n", w);
return 0;
}
