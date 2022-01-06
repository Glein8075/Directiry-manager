#include <stdio.h>
#include <stdlib.h>
#include "en-tete.h"

void sauvegarde(int taille, CLIENT tab[taille], char fichier[40])
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
        fprintf(fic,"%s,",tab[i].prenom);
        fprintf(fic,"%s,",tab[i].nom);
        fprintf(fic,"%s,",tab[i].ville);
        fprintf(fic,"%s,",tab[i].codePostal);
        fprintf(fic,"%s,",tab[i].tel);
        fprintf(fic,"%s,",tab[i].mail);
        fprintf(fic,"%s",tab[i].emploi);
        fprintf(fic,"\n");
        i++;
    }
    while(i<taille);
    fclose(fic);
}
