#include <stdio.h>

int recherche(int t1, int t2, char tab[t1][t2], int indice, char mot)
{
    int i,j,milieu;
    i=0;
    j=t1;
    while i<j
    {
        milieu=(i+j)/2;
        if (strcmp(tab[milieu][indice],mot)==0)
            return milieu;
        if (strcmp(tab[milieu][indice],mot)<0)
            j=milieu-1
        else i=milieu +1
    }
    return -1;
}
