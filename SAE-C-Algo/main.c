#include <stdio.h>
#include <stdlib.h>
#include "en-tete.h"

int main()
{
    CLIENT tab[2];
    char chaine1[300]="Adelaide,Benoit,MARSEILLE,13012,04.16.23.32.39,adelaide.benoit@server.fr,";
    char chaine2[300]=",Dupuy,LYON,69008,04.50.03.11.01,adele.dupuy@server.fr,";
    tab[1]=separation(chaine1);
    tab[2]=separation(chaine2);
    printf("\n %s,%s,%s,%s,%s,%s,%s \n",tab[1].prenom,tab[1].nom,tab[1].ville,tab[1].codePostal,tab[1].tel,tab[1].mail,tab[1].emploi);
    printf("\n %s,%s,%s,%s,%s,%s,%s \n",tab[2].prenom,tab[2].nom,tab[2].ville,tab[2].codePostal,tab[2].tel,tab[2].mail,tab[2].emploi);
    return 0;
}

/**int main()
{



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

