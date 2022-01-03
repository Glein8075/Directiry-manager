#include <stdio.h>
#include <stdlib.h>
#include "en-tete.h"

void filtre_nom(int taille, CLIENT tab[taille], char motif[10])
{

}


void filtre(int taille, CLIENT tab[taille], int choix, char motif[10])
{
    if(choix==1)
    {
        filtre_prenom(taille,tab,motif);
    }
    else if(choix==2)
    {
        filtre_nom(taille,tab,motif);
    }
    else if(choix==3)
    {
        filtre_ville(taille,tab,motif);
    }
    else if(choix==4)
    {
        filtre_codePostal(taille,tab,motif);
    }
    else if(choix==5)
    {
        filtre_tel(taille,tab,motif);
    }
    else if(choix==6)
    {
        filtre_mail(taille,tab,motif);
    }
    else if (choix==7)
    {
        filtre_emploi(taille,tab,motif);
    }
    else printf("erreur de choix");
}
