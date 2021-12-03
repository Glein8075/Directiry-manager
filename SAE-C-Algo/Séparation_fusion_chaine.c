#include <stdio.h>
#include <string.h>
#include "en-tete.h"
#define annu "annuaire5000.csv"

typedef struct
{
    char prenom[20];
    char nom[20];
    char ville[20];
    char codePostal[6];
    char tel[15];
    char mail[50];
    char emploi[50];
}CLIENT;
/**
:entré chaine: str
:sortie c: CLIENT
:Postcodition
: "c" contient les informations sur un client contenu dans "chaine"
:Declaration
: i,j: int
: tab : tableau de str
*/
char separation(char chaine[300])
{   int i,j,k;
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
    return tab;

}

/*int main()
{
    CLIENT c;
    char chaine[300]=",Dupuy,LYON,69008,04.50.03.11.01,adele.dupuy@server.fr,";
    c=separation(chaine);
    printf("\n %s,%s,%s,%s,%s,%s,%s \n",c.prenom,c.nom,c.ville,c.codePostal,c.tel,c.mail,c.emploi);

    return 0;
}*/
