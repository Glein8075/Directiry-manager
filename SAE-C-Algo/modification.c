#include <stdio.h>
#include <string.h>
#include "en-tete.h"

void modif_nom(int taille, CLIENT tab[taille], char modif[30], int choix)
{
    strcpy(tab[choix-1].nom,modif);
}

void modif_mail(int taille, CLIENT tab[taille], char modif[30], int choix)
{
    strcpy(tab[choix].nom,modif);
}

void modif_prenom(int taille, CLIENT tab[taille], char modif[30], int choix)
{
    strcpy(tab[choix].prenom,modif);
}

void modif_ville(int taille, CLIENT tab[taille], char modif[30], int choix)
{
    strcpy(tab[choix].ville,modif);
}

void modif_codePostal(int taille, CLIENT tab[taille], char modif[30], int choix)
{
    strcpy(tab[choix].codePostal,modif);
}

void modif_tel(int taille, CLIENT tab[taille], char modif[30], int choix)
{
    strcpy(tab[choix].tel,modif);
}

void modif_emploi(int taille, CLIENT tab[taille], char modif[30], int choix)
{
    strcpy(tab[choix].emploi,modif);
}

void modification(int taille, CLIENT tab[taille])
{
    int c1,c2;
    char modif[30];
    printf("saisissez le numéro du client que vous voulez modifier");
    scanf("%d",&c1);

    printf("vous recherchez: \n");
    printf("prenom................... 1\n");
    printf("nom ..................... 2\n");
    printf("ville ................... 3\n");
    printf("code postal ............. 4\n");
    printf("numero de telephone...... 5\n");
    printf("mail .................... 6\n");
    printf("emploi .................. 7\n");
    printf("Quitter ................. 8\n");
    printf("Votre choix (saisissez le numero correspondant):");
    scanf("%d", &c2);
    getchar();
    printf("saisissez la modification");
    fgets(modif,30,stdin);
    switch(c2)
    {
        case 1: modif_prenom(taille,tab,modif,c1);
        break;
        case 2: modif_nom(taille,tab,modif,c1);
        break;
        case 3: modif_ville(taille,tab,modif,c1);
        break;
        case 4: modif_codePostal(taille,tab,modif,c1);
        break;
        case 5: modif_tel(taille,tab,modif,c1);
        break;
        case 6: modif_mail(taille,tab,modif,c1);
        break;
        case 7: modif_emploi(taille,tab,modif,c1);
        break;
        case 8: break;
        default: printf("erreur de saisie \n");
    }
}
void supprimer(int taille, CLIENT tab[taille])
{

}
