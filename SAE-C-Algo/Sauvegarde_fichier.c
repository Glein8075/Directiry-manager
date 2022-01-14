#include <stdio.h>
#include <stdlib.h>
#include "en_tete.h"

void sauvegarde(int taille, CLIENT tab[taille],int indice[taille], char fichier[40])
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
        fprintf(fic,"%s,",tab[indice[i]].prenom);
        fprintf(fic,"%s,",tab[indice[i]].nom);
        fprintf(fic,"%s,",tab[indice[i]].ville);
        fprintf(fic,"%s,",tab[indice[i]].codePostal);
        fprintf(fic,"%s,",tab[indice[i]].tel);
        fprintf(fic,"%s,",tab[indice[i]].mail);
        fprintf(fic,"%s",tab[indice[i]].emploi);
        fprintf(fic,"\n");
        i++;
    }
    while(i<taille);
    fclose(fic);
    printf("sauvegarde effectué\n\n");
}

//responsable de la fonction: Valentin SEGALLA
