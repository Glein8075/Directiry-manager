#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nom[20];
    char prenom[20];
    char numtel[12];
}client;

int main()
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
}

