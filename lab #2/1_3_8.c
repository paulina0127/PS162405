#include <stdio.h>
#include <stdlib.h>

int main()
{
int w;
printf("Wybierz figurê.\n1 - kwadrat\n2 - prostok¹t\n3 - trójk¹t\n");
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
    printf("Podaj rozmiary boków.\n");
    scanf("%f\n%f", &a, &b);
    printf("Pole prostok¹ta to: %f\n", a*b);
}
break;

case 3: {
    printf("Podaj rozmiar podstawy i wysokoœci.\n");
    scanf("%f\n%f", &a, &h);
    printf("Pole trójkata to: %f\n", 0.5*a*h);
}
break;

default:
    printf("Nieprawid³owa liczba.\n");
break;
}

return 0;
}
