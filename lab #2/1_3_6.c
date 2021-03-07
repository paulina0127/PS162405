#include <stdio.h>
#include <stdlib.h>

int main()
{
float a,b,c,d,e,f;
printf("Podaj współczynniki pierwszego równania.\n");
scanf("%f\n%f\n%f", &a, &b, &c);
printf("Podaj współczynniki drugiego równania.\n");
scanf("%f\n%f\n%f", &d, &e, &f);

float w, wx, wy;
w = a*e - b*d;
wx = c*e - b*f;
wy = a*f - c*d;

if (w != 0) {
    printf("Rozwiązania: x=%f, y=%f\n", wx/w, wy/w);
}
else if (wx == 0 && wy == 0) {
    printf("Układ ma nieskończenie wiele rozwiązań.\n");
}
else {
    printf("Brak rozwiązań.\n");
}

return 0;
}
