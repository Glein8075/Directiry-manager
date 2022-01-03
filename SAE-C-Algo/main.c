#include <stdio.h>
#include <stdlib.h>
#include "en-tete.h"
#define annu "annuaire5000.csv"

int main()
{
//test ouverture fichier et création du tableau de structure
  /*int i;
    CLIENT tab[taille];
    char chaine[300];
    FILE * fic = fopen(annu,"r+");
    if(fic==NULL)
    {
        printf("Echec Ouverture Fichier");
        exit(EXIT_FAILURE);
    }
    i=0;
    do
    {
        fgets(chaine,300,fic);
        printf("%s\n",chaine);
        tab[i]=separation(chaine);
        printf("c'est fait\n");
        i++;
    }
    while(! feof(fic));
    fclose(fic);
    affichage(taille, tab);*/

//test fonction affichage
    CLIENT tab[2];
    char chaine1[300]="Adelaide,Benoit,MARSEILLE,13012,04.16.23.32.39,adelaide.benoit@server.fr,";
    char chaine2[300]=",Dupuy,LYON,69008,04.50.03.11.01,adele.dupuy@server.fr,";
    tab[0]=separation(chaine1);
    tab[1]=separation(chaine2);
    affichage(2,tab);
    int choix;
    char mot[20];
    int client[2];
//test fonction de recherche
    /*printf("saisissez le nombre correspondant votre recherche: ");
    scanf("%d",&choix);*/

    /*printf("saisissez le nom recherche: ");
    fgets(mot,20,stdin);*/
    recherche(2,tab,"Dupuy",2,client);
    printf("le client n°%d possede l'information Dupuy", client[0]);
    return 0;
}



/**int main()
{
    int i;
    CLIENT tab[5000];
    char chaine[200];
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
    }while(! feof(fic));
    fclose(fic);

    int choix;
    do
    {
        printf("MENU\n\n");
        printf("Ajouter une personne a l'annuaire ....... 1\n");
        printf("Afficher l'annuaire ..................... 2\n");
        printf("Supprimer une personne de l'annuaire .... 3\n");
        printf("Modifier une personne de l'annuaire ..... 4\n");
        printf("Quitter ................................. 5\n");
        printf("Votre choix :");
        scanf("%d", &choix);
        switch(choix)
        {
            case '1': printf("1");
            case '2': printf("2");
            case '3': printf("3");
            case '4': printf("4");
            case '5': break;
            default : printf("Erreur de saisie !\n" );
        }
    }while(choix!= '5');

    return 0;
}*/

