#include <stdio.h>
#include <stdlib.h>
#include "en-tete.h"

/**
entre tab: tableau de structure
entre/sortie fichier: FILE
Postcondition:
chaque ligne de fichier contient un sous tableau de tab
*/
void sauvegarde(int t1, CLIENT tab[t1],FILE*fichier)
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
        fprintf(fic,"%s",tab[i].prenom);
        fprintf(fic,"%s",tab[i].nom);
        fprintf(fic,"%s",tab[i].ville);
        fprintf(fic,"%s",tab[i].codePostal);
        fprintf(fic,"%s",tab[i].tel);
        fprintf(fic,"%s",tab[i].mail);
        fprintf(fic,"%s",tab[i].emploi);
        i++;
    }
    while(i<t1);
    fclose(fic);
}
