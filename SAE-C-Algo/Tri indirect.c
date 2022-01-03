#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "en-tete.h"

/**
:entree tab:tableau de CLIENT
:entre/sortie indice:tableau d'int
:entre taille: int
:Précondition
:tab est un tableau de "taille" element
:et indice a la même taille que tab
:Postcondition
: indice est trier dans l'ordre des éléments de tab qu'ils représentent
:Declaration
:i,j:int
:ipetit:int
**/

void tri_indirect_nom(int taille, CLIENT tab[taille], int indice[taille])
{
        int i,j;
        CLIENT petit;
        i=1;
        while (i <= taille)
        {
            petit=tab[indice[i]];
            j=i-1;
            while (j >= 0 && petit.nom < tab[indice[j]].nom)
            {
                indice[j+1]=indice[j];
                j--;
            }
            indice[j+1]=indice[i];
            i++;
        }
}

/**int main()
{
    ["","Becker","PARIS","75002","01.81.30.33.94","adelaide.becker@server.fr","comptable"]
    ["Benoit","Lambert","","","04.61.87.21.94","benoit.lambert@server.fr","chef d'entreprise"]
    ["Capucine","Humbert du Leroux","MARSEILLE","13008","04.13.88.22.43","capucine.humbert-du-leroux@server.fr","barman"]]}
}*/
