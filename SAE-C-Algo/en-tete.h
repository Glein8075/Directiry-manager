#ifndef EN-TETE_H_INCLUDED
#define EN-TETE_H_INCLUDED
typedef struct
{
    char prenom[20];
    char nom[20];
    char ville[20];
    char codePostal[8];
    char tel[18];
    char mail[50];
    char emploi[50];
}CLIENT;

/**
:entr� chaine: str
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
:entre/sortie indice: tableau de int
:entre taille int
:entre fichier: str
:Pr�condition:
:taille est la taille du tableau de structure tab
:indice est unn tableau contenant les indices de tab tri� en fonction des �l�ments de tab
:Postcondition:
:chaque element de tab correspond une ligne de fichier
*/
void sauvegarde(int taille, CLIENT tab[taille],int indice[taille],char fichier[40]);

/**
:entr�e/sortie tab: tableau de CLIENT
:entr�e/sortie client tableau d'int
:entr�e/sortie indice: tableau d'int
:entr�e taille: int
:Pr�condition
:tab possede "taille" �l�ments
:Postcondition:
:le tableau "client" contient les indices des clients correspondant au mot recherch�
:indice est un tableau contenant les indices de tab tri� en fonction des �l�ments de tab
:D�claration
:choix: int
:mot: str
*/
void recherche(int taille, CLIENT tab[taille], int client[taille],int indice[taille]);

/**
:entree/sortie tab:tableau de CLIENT
:entre/sortie indice:tableau d'int
:entre taille: int
:Pr�condition
:tab est un tableau de "taille" element
:et indice a la m�me taille que tab
:Postcondition
:indice est trier dans l'ordre des �l�ments de tab qu'ils repr�sentent
:Declaration
:i,j:int
:petit:CLIENT
**/

void tri_indirect(int taille, CLIENT tab[taille], int indice[taille]);

/**
:entree/sortie tab:tableau de CLIENT
:entre/sortie indice: tableau d'int
:entre taille: int
:Pr�condition
:tab est un tableau de "taille" element
:indice est unn tableau contenant les indices de tab tri� en fonction des �l�ments de tab
:Declaration
:i:int
**/

void affichage(int taille, CLIENT tab[taille],int indice[taille]);

void modification(int taille, CLIENT tab[taille],int indice[taille]);

void ajouter(int taille, CLIENT tab[taille], int indice[taille]);

void supprimer(int taille, CLIENT tab[taille],int indice[taille]);

#endif // EN-TETE_H_INCLUDED
