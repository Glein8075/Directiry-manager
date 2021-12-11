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
:entre tab: tableau de CLIENT
:entre t1, t2 int
:entre/sortie fichier: str
:Précondition:
:t1 et t2 sont les tailles respectives du tableau à 2 dimentions tab
:Postcondition:
:chaque information d'une ligne de fichier
*/
void sauvegarde(int taille, CLIENT tab[taille],FILE*fichier);

/**
:entrée tab: tableau de CLIENT
:entrée/sortie client tableau d'int
:entrée taille: int
:entrée mot: chaine de caractère
:entre: choix: int
:Précondition
:tab possede "taille" éléments
:mot correspond à ce que recherche l'utilisateur
:Postcondition:
:le tableau "client" contient les indices des clients correspondant au mot recherché
*/
void recherche(int taille, CLIENT tab[taille], char mot[20], int choix, int client[taille]);

/**
:entree tab:tableau de CLIENT
:entre/sortie indice:tableau d'int
:entre taille: int
:Précondition
:tab est un tableau de "taille" element
:et indice a la même taille que tab
:Postcondition
:indice est trier dans l'ordre des éléments de tab qu'ils représentent
:Declaration
:i,j:int
:petit:CLIENT
**/

void tri_indirect(int taille, CLIENT tab[taille], int indice[taille]);

#endif // EN-TETE_H_INCLUDED
