#include <stdio.h>
#include <string.h>

#define chemin "annuaire5000.csv"

typedef struct
{
  char prenom[50];
  char nom[50];
  char ville[50];
  char codePostal[50];
  char tel[50];
  char mail[50];
  char emploi[50];
} CLIENT;

CLIENT separation(char chaine[300])
{
    CLIENT c;
    int i,j,k;
    char tab[7][100]={"","","","","","",""};
    printf("chaine=%s\n",chaine);
    i=0;
    j=0;
    do
    {
        k=0;
        do
        {
            if(chaine[i]!=',')
            {
              tab[j][k]=chaine[i];
              k++;
              i++;
            }
        }
        while(chaine[i]!=',' && chaine[i]!='\n');
        tab[j][k]='\0';
        i++;
        j++;
    }while(chaine[i]!='\0' && chaine[i]!='\n');
    strcpy(c.prenom,tab[0]);
    strcpy(c.nom,tab[1]);
    strcpy(c.ville,tab[2]);
    strcpy(c.codePostal,tab[3]);
    strcpy(c.tel,tab[4]);
    strcpy(c.mail,tab[5]);
    strcpy(c.emploi,tab[6]);
    return c;
}

int main()
{
 char chaine[200];
 CLIENT c;
 FILE * fic = fopen(chemin,"r");

 if(fic == NULL)
 {
   printf("Echec ouverture fichier\n");
   return 1;
 }

 do
 {
   fgets(chaine,200,fic);
   c=separation(chaine);
   printf("c.prenom = %s c.nom = %s c.codePostal = %s c.ville = %s c.tel = %s c.mail = %s c.emploi = %s \n",c.prenom,c.nom,c.codePostal,c.ville,c.tel,c.mail,c.emploi);
 }
while(!feof(fic));
 return 0;
}
