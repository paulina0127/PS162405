#include <stdio.h>
#include <stdlib.h>

int main()
{
    char napis[20]="PAULINA"; //tu trzeba wpisac swoje imie, wszystkie litery duze
    char z = *(napis+2); //z=85 'U'
    int a = napis[3]; // a=76   ,z=85 'U'
    z++; // a=76   ,z=86 'V'
    ++a; // a=77   ,z=86 'V'
    z=(a-=2)+3; // a=75   ,z=78 'N'
    a=a^4; // a=79   ,z=78 'N'
    return 0;
}
