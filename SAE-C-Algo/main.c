#include <stdio.h>
#include <stdlib.h>
#include "en-tete.h"



int main()
{



//test fonction affichage
    CLIENT tab[5];
    char chaine1[300]="Adelaide,Benoit,MARSEILLE,13012,04.16.23.32.39,adelaide.benoit@server.fr,";
    char chaine2[300]=",Dupuy,LYON,69008,04.50.03.11.01,adele.dupuy@server.fr,";
    char chaine3[300]="Adelaide,Bertrand,,,02.78.55.93.77,adelaide.bertrand@server.fr,";
    char chaine4[300]=",Faure,TOULON,83100,04.99.54.08.97,adelaide.faure@server.fr,chauffeur";
    char chaine5[300]="Adelaide,Laurent,MONTPELLIER,34080,04.39.69.09.34,adelaide.laurent@server.fr,journaliste";
    tab[0]=separation(chaine1);
    tab[1]=separation(chaine2);
    tab[2]=separation(chaine3);
    tab[3]=separation(chaine4);
    tab[4]=separation(chaine5);
    int i=0;
    int indice[5];
    printf("indice: ");
    while(i<5)
    {
        indice[i]=i;
        printf("%d",indice[i]);
        i++;
    }
    printf("\n");
    affichage(5,tab,indice);
//test fonction de recherche
    /*printf("saisissez le nombre correspondant votre recherche: ");
    scanf("%d",&choix);

    printf("saisissez le nom recherche: ");
    fgets(mot,20,stdin);
    int client[5];
    recherche(5,tab,client,indice);
    i=0;
    while(i<5)
    {
        printf("%d,", client[i]+1);
        i++;
    }
//test modification
    /*modification(5,tab);
    printf("modif effectue: %s\n", tab[5].prenom);
//test tri
    /*tri_indirect(5,tab,indice);
    affichage(5,tab,indice);*/
//test filtre
    filtre(5,tab,indice);
    return 0;
}


//demander a l'utilisateur le nom du fichier
/*int main()
{
    int i;
    int taille=1;
    CLIENT * tab=NULL;
    char chaine[200];
    char annu[30];
    tab=calloc(1,sizeof(CLIENT));
    printf("saisissez le nom du fichier annuaire: ");
    fgets(annu,30,stdin);
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
        tab=realloc(tab,i*sizeof(CLIENT));
        tab[i]=separation(chaine);
        printf("c.prenom = %s c.nom = %s c.codePostal = %s c.ville = %s c.tel = %s c.mail = %s c.emploi = %s \n",tab[i].prenom,tab[i].nom,tab[i].codePostal,tab[i].ville,tab[i].tel,tab[i].mail,tab[i].emploi);
        taille++;
        i++;
    }while(! feof(fic));
    fclose(fic);
    i=0;
    int indice[taille];
    while(i<taille)
    {
        indice[i]=i;
        printf("%d",indice[i]);
        i++;
    }
    affichage(taille,tab,indice);
    int choix;
    int client[taille];
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
            case 1: //ajout(taille,tab);
                    break;
            case 2: affichage(taille,tab,indice);
                    break;
            case 3: supprimer(taille,tab);
                    break;
            case 4: recherche(taille,tab,client,indice);
                    break;
            case 5: tri_indirect(taille,tab,indice);
                    break;
            case 6: sauvegarde(taille,tab,indice,annu);
                    break;
            case 7: break;
            default : printf("Erreur de saisie !\n" );
        }
    }while(choix!= '6');

    return 0;
}*/

