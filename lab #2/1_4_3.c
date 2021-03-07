#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,m,k,i;
printf("Podaj trzy liczby całkowite dodatnie.\n");
scanf("%d\n%d\n%d", &n, &m, &k);

for (i = n; i < k; i += n) {
    if (i > m)
        printf("%d ", i);
}

return 0;
}
