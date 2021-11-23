#include <stdio.h>
#include <string.h>
#define annu "annuaire5000.csv"

typedef struct
{
    char prenom[20];
    char nom[20];
    char ville[20];
    char codePostal[5];
    char tel[10];
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
CLIENT separation(char chaine)
{
    int i,j;
    char tab[7][100]={"","","","","","",""};
    CLIENT c;
    i=0;
    j=0;
    do
    {
        do
        {
            strcat(tab[j],chaine[i]);
            i++;
        }
        while(chaine[i]!=','||chaine[i]='\n');
        i++;
        j++;
    }while(chaine[i]!='\0');
    c.prenom=chaine[0];
    c.nom=chaine[1];
    c.ville=chaine[2];
    c.codePostal=chaine[3];
    c.tel=chaine[4];
    c.mail=chaine[5];
    c.emploi=chaine[6];
    return c
}

int main()
{
    CLIENT c;
    char chaine[300]={",Dupuy,LYON,69008,04.50.03.11.01,adele.dupuy@server.fr,"};
    c=separation(chaine);
    printf("%s,%s,%s,%s,%s,%s,%s"c.prenom,c.nom=,c.ville,c.codePostal,c.tel,c.mail,c.emploi);
    return 0
}
