#include <stdio.h>
#include <string.h>
#include "en-tete.h"
#define annu "annuaire5000.csv"


CLIENT separation(char chaine[300])
{
    CLIENT c;
    int i,j,k;
    char tab[7][100]={"","","","","","",""};
    i=0;
    j=0;
    do
    {
        k=0;
        do
        {
            if(chaine[i]!=',')
            {tab[j][k]=chaine[i];
            k++;
            i++;}
        }
        while(chaine[i]!=','||chaine[i]=='\n');
        tab[j][k]='\0';
        i++;
        j++;
    }while(chaine[i]!='\0');
    strcpy(c.prenom,tab[0]);
    strcpy(c.nom,tab[1]);
    strcpy(c.ville,tab[2]);
    strcpy(c.codePostal,tab[3]);
    strcpy(c.tel,tab[4]);
    strcpy(c.mail,tab[5]);
    strcpy(c.emploi,tab[6]);
    return c;
}


