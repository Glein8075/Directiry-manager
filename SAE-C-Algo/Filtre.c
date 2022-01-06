#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "en-tete.h"

void filtre_nom(int taille, CLIENT tab[taille],int indice[taille], char motif[50])
{
    int i;
    if(motif!=NULL)
    {
        if(strcmp(motif,"M")>0||strcmp(motif,"m")>0||strcmp(motif,"04")>0)
        {
            i=taille-1;
            while(i>taille/2)
            {
                if(strstr(motif,tab[indice[i]].nom))
                {
                    printf("%s\n",tab[indice[i]].nom);
                }
            }
        }
        else
        {
            i=0;
            while(i<=taille/2)
            {
                if(strstr(motif,tab[indice[i]].nom))
                {
                    printf("%s\n",tab[indice[i]].nom);
                }
            }
        }
    }
    else
    {
        i=0;
        while(i<taille)printf("%s",tab[indice[i]].nom);
    }
}

void filtre_prenom(int taille, CLIENT tab[taille],int indice[taille], char motif[50])
{

}

void filtre_ville(int taille, CLIENT tab[taille],int indice[taille], char motif[50])
{

}

void filtre_codePostal(int taille, CLIENT tab[taille],int indice[taille], char motif[50])
{

}

void filtre_tel(int taille, CLIENT tab[taille],int indice[taille], char motif[50])
{

}

void filtre_mail(int taille, CLIENT tab[taille],int indice[taille], char motif[50])
{

}

void filtre_emploi(int taille, CLIENT tab[taille],int indice[taille], char motif[50])
{

}

void filtre(int taille, CLIENT tab[taille],int indice[taille])
{
    int choix;
    char rep=NULL;
    char motif[50];
    printf("FILTRE\n\n");
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
    getchar();
    do{
        printf("voulez vous un motif de filtre ? (O/N)");
        scanf("%c",&rep);
    }while(rep!='O' || rep!='N');
    getchar();
    printf("saisissez un motif de filtre");
    fgets(motif,50,stdin);
    switch(choix)
    {
        case 1: {tri_indirect_prenom(taille,tab,indice);
                filtre_prenom(taille,tab,indice,motif);}
        break;
        case 2: {tri_indirect_nom(taille,tab);
                filtre_nom(taille,tab,indice,motif);}
        break;
        case 3: {tri_indirect_ville(taille,tab,indice);
                filtre_ville(taille,tab,indice,motif);}
        break;
        case 4: {tri_indirect_codePostal(taille,tab,indice);
                filtre_codePostal(taille,tab,indice,motif);}
        break;
        case 5: {tri_indirect_tel(taille,tab,indice);
                filtre_tel(taille,tab,indice,motif);}
        break;
        case 6: {tri_indirect_mail(taille,tab,indice);
                filtre_mail(taille,tab,indice,motif);}
        break;
        case 7: {tri_indirect_emploi(taille,tab,indice);
                filtre_emploi(taille,tab,indice,motif);}
        break;
        case 8: break;
        default: printf("erreur de saisie \n");
    }
}
