#include <stdio.h>
#include <stdlib.h>
#include "en_tete.h"
#include "Affichage_annuaire.h"
#include "Filtre.h"
#include "modification.h"
#include "Recherche.h"
#include "Sauvegarde_fichier.h"
#include "Separation_chaine.h"
#include "Tri_indirect.h"

int main()
{
    int i;
    int taille;
    char chaine[200];
    char annu[30];
    printf("saisissez le nom du fichier annuaire (format .txt ou .csv): ");
    scanf("%s",annu);
    getchar();
    printf("Ainsi que le nombre de client de cette annuaire: ");
    scanf("%d",&taille);
    getchar();
    CLIENT tab[taille];
    int indice[taille];
    FILE * fic = fopen(annu,"r+");
    if(fic==NULL)
    {
        printf("Echec Ouverture Fichier");
        exit(EXIT_FAILURE);
    }
    i=0;
    do
    {
        fgets(chaine, 200, fic);
        tab[i]=separation(chaine);
        indice[i]=i;
        i++;
    }while(!feof(fic));
    fclose(fic);
    affichage(taille,tab,indice);
    int choix;
    do
    {
        printf("MENU\n\n");
        printf("Ajouter une personne a l'annuaire ........ 1\n");
        printf("modifier une information d'une personne .. 2\n");
        printf("Afficher l'annuaire sans filtre .......... 3\n");
        printf("Afficher l'annuaire avec filtre .......... 4\n");
        printf("Supprimer une personne de l'annuaire ..... 5\n");
        printf("Rechercher une personne de l'annuaire .... 6\n");
        printf("Trier l'annuaire ......................... 7\n");
        printf("Sauvegarder les modifications ............ 8\n");
        printf("Quitter .................................. 9\n");
        printf("Votre choix : ");
        scanf("%d", &choix);
        switch(choix)
        {
            case 1: ajouter(taille,tab,indice);
                    break;
            case 2: modification(taille,tab,indice);
                    break;
            case 3: affichage(taille,tab,indice);
                    break;
            case 4: filtre(taille,tab,indice);
                    break;
            case 5: supprimer(taille,tab,indice);
                    break;
            case 6: {int client[taille];
                    int i=0;
                    while(i<taille)
                    {
                    client[i]=-1;
                    i++;
                    }recherche(taille,tab,client,indice);
                    }

                    break;
            case 7: tri_indirect(taille,tab,indice);
                    break;
            case 8: sauvegarde(taille,tab,indice,annu);
                    break;
            case 9: break;
            default : printf("Erreur de saisie !\n" );
        }
    }while(choix!=9);

    return 0;
}

