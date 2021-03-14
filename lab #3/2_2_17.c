#include <stdio.h>
#include <stdlib.h>

void wyw()
{
static int licz = 0;
licz++;
printf("Wywołanie: %d\n",licz);
}

int main()
{
wyw();
wyw();
wyw();
wyw();
wyw();

return 0;
}
