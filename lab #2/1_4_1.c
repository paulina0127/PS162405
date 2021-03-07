#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,m,i;

printf("Podaj dwie liczby całkowite dodatnie.\n");
scanf("%d\n%d", &n, &m);

for (i = n; i < m; i += n) {
    printf("%d ", i);
}

return 0;
}
