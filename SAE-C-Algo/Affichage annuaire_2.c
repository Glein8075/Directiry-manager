#include <stdio.h>
#include <stdlib.h>
#include "en-tete.h"
#define annu "annuaire5000.csv"

int main()
{
    int i;
    char chaine[5000][300];
    FILE * fic = fopen(annu,"a+");
    if(fic==NULL)
    {
        printf("Echec Ouverture Fichier");
        exit(EXIT_FAILURE);
    }
    i=0;
    do
    {
        fgets(chaine[i],300,fic);
        i++;
    }
    while(! feof(fic));
    fclose(fic);
    return 0;
}

