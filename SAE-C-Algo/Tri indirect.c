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

void tri_indirect_nom(int taille, CLIENT tab[taille],int indice[taille])
{
    int i,j;
    CLIENT petit;
    i=1;
    while (i < taille)
    {
        petit=tab[indice[i]];
        j=i-1;
        while (j >= 0 && strcmp(petit.nom,tab[indice[j]].nom)<0)
        {
            indice[j+1]=indice[j];
            j--;
        }
        indice[j+1]=i;
        i++;
        printf("\n");
    }
}

void tri_indirect_prenom(int taille,CLIENT tab[taille],int indice[taille])
{
    int i,j;
    CLIENT petit;
    i=1;
    while (i < taille)
    {
        petit=tab[indice[i]];
        j=i-1;
        while (j >= 0 && strcmp(petit.prenom,tab[indice[j]].prenom)<0)
        {
            indice[j+1]=indice[j];
            j--;
        }
        indice[j+1]=i;
        i++;
        printf("\n");
    }
}

void tri_indirect_ville(int taille, CLIENT tab[taille], int indice[taille])
{
        int i,j;
        CLIENT petit;
        i=1;
        while (i < taille)
        {
            petit=tab[indice[i]];
            j=i-1;
            while (j >= 0 && strcmp(petit.ville,tab[indice[j]].ville)<0)
            {
                indice[j+1]=indice[j];
                j--;
            }
            indice[j+1]=i;
            i++;
        }
}
void tri_indirect_codePostal(int taille, CLIENT tab[taille], int indice[taille])
{
        int i,j;
        CLIENT petit;
        i=1;
        while (i < taille)
        {
            petit=tab[indice[i]];
            j=i-1;
            while (j >= 0 && strcmp(petit.codePostal,tab[indice[j]].codePostal)<0)
            {
                indice[j+1]=indice[j];
                j--;
            }
            indice[j+1]=i;
            i++;
        }
}
void tri_indirect_tel(int taille, CLIENT tab[taille], int indice[taille])
{
        int i,j;
        CLIENT petit;
        i=1;
        while (i < taille)
        {
            petit=tab[indice[i]];
            j=i-1;
            while (j >= 0 && strcmp(petit.tel,tab[indice[j]].tel)<0)
            {
                indice[j+1]=indice[j];
                j--;
            }
            indice[j+1]=i;
            i++;
        }
}
void tri_indirect_mail(int taille, CLIENT tab[taille], int indice[taille])
{
        int i,j;
        CLIENT petit;
        i=1;
        while (i < taille)
        {
            petit=tab[indice[i]];
            j=i-1;
            while (j >= 0 && strcmp(petit.mail,tab[indice[j]].mail)<0)
            {
                indice[j+1]=indice[j];
                j--;
            }
            indice[j+1]=i;
            i++;
        }
}
void tri_indirect_emploi(int taille, CLIENT tab[taille], int indice[taille])
{
        int i,j;
        CLIENT petit;
        i=1;
        while (i < taille)
        {
            petit=tab[indice[i]];
            j=i-1;
            while (j >= 0 && strcmp(petit.emploi,tab[indice[j]].emploi)<0)
            {
                indice[j+1]=indice[j];
                j--;
            }
            indice[j+1]=i;
            i++;
        }
}

void tri_indirect(int taille, CLIENT tab[taille],int indice[taille])
{
    int choix;
    printf("TRI\n\n");
    printf("Vous triez par: \n");
    printf("prenom................... 1\n");
    printf("nom ..................... 2\n");
    printf("ville ................... 3\n");
    printf("code postal ............. 4\n");
    printf("numero de telephone...... 5\n");
    printf("mail .................... 6\n");
    printf("emploi .................. 7\n");
    printf("Quitter ................. 8\n");
    printf("Votre choix (saisissez le numero correspondant):");
    scanf("%d", &choix);
    switch(choix)
    {
        case 1: tri_indirect_prenom(taille,tab,indice);
        break;
        case 2: tri_indirect_nom(taille,tab,indice);
        break;
        case 3: tri_indirect_ville(taille,tab,indice);
        break;
        case 4: tri_indirect_codePostal(taille,tab,indice);
        break;
        case 5: tri_indirect_tel(taille,tab,indice);
        break;
        case 6: tri_indirect_mail(taille,tab,indice);
        break;
        case 7: tri_indirect_emploi(taille,tab,indice);
        break;
        case 8: break;
        default: printf("erreur de saisie \n");
    }
}


/**int main()
{
    ["","Becker","PARIS","75002","01.81.30.33.94","adelaide.becker@server.fr","comptable"]
    ["Benoit","Lambert","","","04.61.87.21.94","benoit.lambert@server.fr","chef d'entreprise"]
    ["Capucine","Humbert du Leroux","MARSEILLE","13008","04.13.88.22.43","capucine.humbert-du-leroux@server.fr","barman"]]}
}*/
