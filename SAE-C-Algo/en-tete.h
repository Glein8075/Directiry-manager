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
:entre tab: tableau de CLIENT
:entre t1, t2 int
:entre/sortie fichier: str
:Pr�condition:
:t1 et t2 sont les tailles respectives du tableau � 2 dimentions tab
:Postcondition:
:chaque information d'une ligne de fichier
*/
void sauvegarde(int taille, CLIENT tab[taille],FILE*fichier);

/**
:entr�e tab: tableau de CLIENT
:entr�e/sortie client tableau d'int
:entr�e taille: int
:entr�e mot: chaine de caract�re
:entre: choix: int
:Pr�condition
:tab possede "taille" �l�ments
:mot correspond � ce que recherche l'utilisateur
:Postcondition:
:le tableau "client" contient les indices des clients correspondant au mot recherch�
*/
void recherche(int taille, CLIENT tab[taille], char mot[20], int choix, int client[taille]);

/**
:entree tab:tableau de CLIENT
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

#endif // EN-TETE_H_INCLUDED
