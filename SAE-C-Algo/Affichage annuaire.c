#include <stdio.h>
#include <stdlib.h>
#include "en-tete.h"
#define annu "annuaire5000.csv"

void affichage(int t1, int t2, char tab[t1][t2])
{
    int i,j;
    i=0;
    while(i<t1)
    {
        j=0;
        while(j<t2)
        {
            printf("%s", tab[i][j]);
            j++;
        }
        i++;
    }
}
