#include <stdio.h>
#include <stdlib.h>


int pierw(int n)
{
int i,w=0;

for (i = 0; i*i <= n; i++) {
    w = i;
}
return w;
}


int main()
{
int n;

printf("Podaj liczbę dodatnią.\n");
scanf("%d", &n);
printf("Wynik: %d\n", pierw(n));

return 0;
}
