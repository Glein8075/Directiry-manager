#ifndef EN-TETE_H_INCLUDED
#define EN-TETE_H_INCLUDED
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
CLIENT separation(char chaine[300]);

/**
entre tab: tableau de CLIENT
entre t1, t2 int
entre/sortie fichier: str
Précondition:
t1 et t2 sont les tailles respectives du tableau à 2 dimentions tab
Postcondition:
chaque information d'une ligne de fichier
*/
void sauvegarde(int t1, CLIENT tab[t1],FILE*fichier);

/**
entre
*/
void recherche(int t1, CLIENT tab[t1], int indice, char mot, int client[t1]);

/**
:entree ad:tableau de CLIENT
:entre/sortie  ai:tableau d'int
:Declaration
:i,j:int
:ipetit:int
**/

void tri_indirect();

#endif // EN-TETE_H_INCLUDED
