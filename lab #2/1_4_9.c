#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,m,i,nwd=0;

printf("Podaj dwie liczby całkowite dodatnie.\n");
scanf("%d\n%d", &n, &m);

for (i = 1; i <= n; i++) {
    if (n % i == 0 && m % i == 0)
        nwd = i;
}

printf("Największy wspólny dzielnik to: %d\n", nwd);
return 0;
}
