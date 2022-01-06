#include <stdio.h>
#include <stdlib.h>
#include "en-tete.h"

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
