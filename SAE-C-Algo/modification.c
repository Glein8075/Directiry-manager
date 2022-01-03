#include <stdio.h>
#include <string.h>
#include "en-tete.h"

void modif_nom(int taille, CLIENT tab[taille], char modif[20], int choix)
{
    strcpy(tab[choix].nom,modif);
}

void modif_mail(int taille, CLIENT tab[taille], char modif[20], int choix)
{
    strcpy(tab[choix].nom,modif);
}

void modif_prenom(int taille, CLIENT tab[taille], char modif[20], int choix)
{
    strcpy(tab[choix].prenom,modif);
}

void modif_ville(int taille, CLIENT tab[taille], char modif[20], int choix)
{
    strcpy(tab[choix].ville,modif);
}

void modif_codePostal(int taille, CLIENT tab[taille], char modif[20], int choix)
{
    strcpy(tab[choix].codePostal,modif);
}

void modif_tel(int taille, CLIENT tab[taille], char modif[20], int choix)
{
    strcpy(tab[choix].tel,modif);
}

void modif_emploi(int taille, CLIENT tab[taille], char modif[20], int choix)
{
    strcpy(tab[choix].emploi,modif);
}

void supprimer()
{

}
su
