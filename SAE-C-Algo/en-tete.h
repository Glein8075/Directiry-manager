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
:entre/sortie tab: tableau de CLIENT
:entre taille int
:entre/sortie fichier: str
:Précondition:
:taille est la taille du tableau de structure tab
:Postcondition:
:chaque element de tab correspond une ligne de fichier
*/
void sauvegarde(int taille, CLIENT tab[taille],char fichier[40]);

/**
:entrée tab: tableau de CLIENT
:entrée/sortie client tableau d'int
:entrée taille: int
:Précondition
:tab possede "taille" éléments
:Postcondition:
:le tableau "client" contient les indices des clients correspondant au mot recherché
:Déclaration
:choix: int
:mot: str
*/
void recherche(int taille, CLIENT tab[taille], int client[taille],int indice[taille]);

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

/**
:entree/sortie tab:tableau de CLIENT
:entre taille: int
:Précondition
:tab est un tableau de "taille" element
:Declaration
:i:int
**/

void affichage(int taille, CLIENT tab[taille],int indice[taille]);

#endif // EN-TETE_H_INCLUDED
