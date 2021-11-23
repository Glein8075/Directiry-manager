#include <stdio.h>
#include <stdlib.h>
#include Sauvegarde_fichier.h

/**
entre tab: tableau à 2 dimention de str
entre/sortie fichier: str
Postcondition:
chaque ligne de fichier contient un sous tableau de tab
*/
void sauvegarde(tab,fichier)
{
    FILE * fic = fopen(fichier,"w");
    if(fic==NULL)
    {
        printf("Echec Ouverture Fichier");
        exit(EXIT_FAILURE);
    }
    do
    {
        fprintf(fic,"%s",tab[i]);
        i++
    }
    while(i<5000);
    fclose(fic);
    return 0;
}
