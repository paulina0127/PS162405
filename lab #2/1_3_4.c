#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
int a,b;
printf("Podaj dwie liczby całkowite.\n");
scanf("%d\n%d", &a, &b);
if (fabs(a) >= fabs(b)) {
    printf("Liczba: %d\n", a);
}
else {
    printf("Liczba: %d\n", b);
}

return 0;
}
