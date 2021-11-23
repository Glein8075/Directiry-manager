#include <stdio.h>
#include <stdlib.h>
#define annu "annuaire5000.csv"

void affichage()
{
    char chaine[300];
    FILE * fic = fopen(annu,"a+");
    if(fic==NULL)
    {
        printf("Echec Ouverture Fichier");
        exit(EXIT_FAILURE);
    }
    do
    {
        fgets(chaine,300,fic);
        printf("%s",chaine);
    }
    while(! feof(fic));
    fclose(fic);
    return 0;
}
