#include <stdio.h>
#include <stdlib.h>
#define annu "annuaire5000.csv"

int main()
{
    char chaine[300];
    FILE * fic1 = fopen(annu,"w+");
    if(fic1==NULL || fic2==NULL)
    {
        printf("Echec Ouverture Fichier");
        exit(EXIT_FAILURE);
    }
    do
    {
        fgets(chaine,300,fic1);
        fprintf(fic2,"%s",chaine);
    }
    while(! feof(fic1));
    fclose(fic1);
    fclose(fic2);
    return 0;
}
