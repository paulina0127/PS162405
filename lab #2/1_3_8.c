#include <stdio.h>
#include <stdlib.h>

int main()
{
int w;
printf("Wybierz figur�.\n1 - kwadrat\n2 - prostok�t\n3 - tr�jk�t\n");
scanf("%d", &w);

float a,b,h;
switch (w) {
case 1: {
    printf("Podaj rozmiar boku.\n");
    scanf("%f", &a);
    printf("Pole kwadratu to: %f\n", a*a);
}
break;

case 2: {
    printf("Podaj rozmiary bok�w.\n");
    scanf("%f\n%f", &a, &b);
    printf("Pole prostok�ta to: %f\n", a*b);
}
break;

case 3: {
    printf("Podaj rozmiar podstawy i wysoko�ci.\n");
    scanf("%f\n%f", &a, &h);
    printf("Pole tr�jkata to: %f\n", 0.5*a*h);
}
break;

default:
    printf("Nieprawid�owa liczba.\n");
break;
}

return 0;
}
