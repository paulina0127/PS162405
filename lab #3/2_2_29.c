#include <stdio.h>
#include <stdlib.h>

int nwd(int n, int m)
{
if (n % m == 0)
    return m;

if (n > m)
    return nwd(n % m, m);
return nwd(m % n, n);
}

int main()
{
int n, m;

printf("Podaj dwie dodatnie liczby całkowite.\n");
scanf("%d\n%d", &n, &m);
printf("NWD: %d", nwd(n,m));
return 0;
}
