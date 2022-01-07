#include <stdio.h>
#include <stdlib.h>
#include "en-tete.h"
#include "Affichage_annuaire.h"
#include "Filtre.h"
#include "modification.h"
#include "Recherche.h"
#include "Sauvegarde_fichier.h"
#include "Separation_chaine.h"
#include "Tri_indirect.h"

//demander a l'utilisateur le nom du fichier
int main()
{
    int i;
    int taille=20;
    char chaine[200];
    char annu[30]="annuaire.csv";
    CLIENT tab[taille];
    /*printf("saisissez le nom du fichier annuaire (format .txt ou .csv): ");
    scanf("%s",annu);*/
    /*fgets(annu,30,stdin);*/
    FILE * fic = fopen("annuaire.csv","r+");
    if(fic==NULL)
    {
        printf("Echec Ouverture Fichier");
        exit(EXIT_FAILURE);
    }
    i=0;
    printf("fichier ouvert\n");
    do
    {
        fgets(chaine, 200, fic);
        tab[i]=separation(chaine);
        printf("structure: %s ,%s, %s,%s ,%s, %s,%s", tab[i].prenom,tab[i].nom,tab[i].ville,tab[i].codePostal,tab[i].tel,tab[i].mail,tab[i].emploi);
        i++;
    }while(i<taille);
    printf("tableau fait\n");
    fclose(fic);
    i=0;
    while(i<taille)
    {
        printf("%d: %s,%s,%s,%s,%s,%s,%s \n",i+1,tab[i].prenom,tab[i].nom,tab[i].ville,tab[i].codePostal,tab[i].tel,tab[i].mail,tab[i].emploi);
        i++;
    }
    i=0;
    int indice[taille];
    while(i<taille)
    {
        indice[i]=i;
        i++;
    }
    i=0;
    while(i<taille)
    {
        printf("%d: %s,%s,%s,%s,%s,%s,%s \n",i+1,tab[i].prenom,tab[i].nom,tab[i].ville,tab[i].codePostal,tab[i].tel,tab[i].mail,tab[i].emploi);
        i++;
    }
    affichage(taille,tab,indice);
    int choix;
    do
    {
        printf("MENU\n\n");
        printf("Ajouter une personne a l'annuaire ....... 1\n");
        printf("Afficher l'annuaire ..................... 2\n");
        printf("Supprimer une personne de l'annuaire .... 3\n");
        printf("Rechercher une personne de l'annuaire ... 4\n");
        printf("Trier ................................... 5\n");
        printf("Sauvegarder les modifications ........... 6\n");
        printf("Quitter ................................. 7\n");
        printf("Votre choix : ");
        scanf("%d", &choix);
        switch(choix)
        {
            case 1: ajouter(taille,tab,indice);
                    break;
            case 2: affichage(taille,tab,indice);
                    break;
            case 3: supprimer(taille,tab,indice);
                    break;
            case 4: {int client[taille];
                    i=0;
                    while(i<taille)
                    {
                    client[i]=-1;
                    i++;
                    }recherche(taille,tab,client,indice);
                    }

                    break;
            case 5: tri_indirect(taille,tab,indice);
                    break;
            case 6: sauvegarde(taille,tab,indice,annu);
                    break;
            case 7: break;
            default : printf("Erreur de saisie !\n" );
        }
    }while(choix!=7);

    return 0;
}

