#include <stdio.h>
#include <stdlib.h>
#include "en-tete.h"

void affichage(int taille, CLIENT tab[taille],int indice[taille])
{
    int i;
    i=0;
    while(i<taille)
    {
        printf("%d: %s,%s,%s,%s,%s,%s,%s \n",i+1,tab[i].prenom,tab[i].nom,tab[i].ville,tab[i].codePostal,tab[i].tel,tab[i].mail,tab[i].emploi);
        i++;
    }
}
