#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
    clock_t tic = clock();
    do
    {
        fgets(chaine, 200, fic);
        tab[i]=separation(chaine);
        indice[i]=i;
        i++;
    }while(!feof(fic));
    fclose(fic);
    printf("annuaire charge\n");
    clock_t toc = clock();
    printf("Duree creation du tableau : %lf ms\n",((double)(toc - tic) / CLOCKS_PER_SEC) * 1000);
    int choix;
    do
    {
        printf("MENU\n\n");
        printf("Ajouter une personne a l'annuaire ............ 1\n");
        printf("modifier une information d'une personne ...... 2\n");
        printf("Afficher l'annuaire sans filtre .............. 3\n");
        printf("Afficher les personnes avec des infos vides .. 4\n");
        printf("Afficher l'annuaire avec filtre .............. 5\n");
        printf("Supprimer une personne de l'annuaire ......... 6\n");
        printf("Rechercher une personne de l'annuaire ........ 7\n");
        printf("Trier l'annuaire ............................. 8\n");
        printf("Sauvegarder les modifications ................ 9\n");
        printf("Quitter ...................................... 10\n");
        printf("Votre choix : ");
        scanf("%d", &choix);
        switch(choix)
        {
            case 1: taille=ajouter(taille,tab,indice);
                    break;
            case 2: modification(taille,tab,indice);
                    break;
            case 3: {tic = clock();
                    affichage(taille,tab,indice);
                    toc = clock();
                    printf("Duree affichage : %lf ms\n",((double)(toc - tic) / CLOCKS_PER_SEC) * 1000);
                    break;}
            case 4: affichage_vide(taille,tab,indice);
                    break;
            case 5: filtre(taille,tab,indice);
                    break;
            case 6: taille=supprimer(taille,tab,indice);
                    break;
            case 7: {int client[taille];
                    int i=0;
                    while(i<taille)
                    {
                    client[i]=-1;
                    i++;
                    }recherche(taille,tab,client,indice);
                    }

                    break;
            case 8: tri_indirect(taille,tab,indice);
                    break;
            case 9: sauvegarde(taille,tab,indice,annu);
                    break;
            case 10: break;
            default : printf("Erreur de saisie !\n" );
        }
    }while(choix!=10);

    return 0;
}

