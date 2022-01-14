#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "en_tete.h"

void affichage(int taille, CLIENT tab[taille],int indice[taille])
{
    int i;
    i=0;
    while(i<taille)
    {
        printf("%d: %s,%s,%s,%s,%s,%s,%s \n",i+1,tab[indice[i]].prenom,tab[indice[i]].nom,tab[indice[i]].ville,tab[indice[i]].codePostal,tab[indice[i]].tel,tab[indice[i]].mail,tab[indice[i]].emploi);
        i++;
    }
}

void affichage_vide(int taille,CLIENT tab[taille],int indice[taille])
{
   int i;
    i=0;
    while(i<taille)
    {
        if(strcmp(tab[indice[i]].prenom,"")==0||strcmp(tab[indice[i]].nom,"")==0||strcmp(tab[indice[i]].ville,"")==0||strcmp(tab[indice[i]].codePostal,"")==0||strcmp(tab[indice[i]].tel,"")==0||strcmp(tab[indice[i]].mail,"")==0||strcmp(tab[indice[i]].emploi,"")==0)
        {
            printf("%d: %s,%s,%s,%s,%s,%s,%s \n",i+1,tab[indice[i]].prenom,tab[indice[i]].nom,tab[indice[i]].ville,tab[indice[i]].codePostal,tab[indice[i]].tel,tab[indice[i]].mail,tab[indice[i]].emploi);
        }
        i++;
    }
}

//responsable de la fonction: Valentin SEGALLA
