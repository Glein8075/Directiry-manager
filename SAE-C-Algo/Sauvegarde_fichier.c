#include <stdio.h>
#include <stdlib.h>
#include "en-tete.h"

/**
entre tab: tableau à 2 dimention de str
entre/sortie fichier: str
Postcondition:
chaque ligne de fichier contient un sous tableau de tab
*/
void sauvegarde(int t1, int t2, char tab[t1][t2],FILE*fichier)
{
    int i;
    FILE * fic = fopen(fichier,"w+");
    if(fic==NULL)
    {
        printf("Echec Ouverture Fichier");
        exit(EXIT_FAILURE);
    }
    i=0;
    do
    {
        fprintf(fic,"%s",tab[i]);
        i++;
    }
    while(i<5000);
    fclose(fic);
}
