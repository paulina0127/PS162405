#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d\n %d\n %d", &a, &b, &c);
    printf("%f", (double)(a+b+c)/3);

    printf("\n");

    printf("%f", (a+b+c)/3.0);
    return 0;
}
