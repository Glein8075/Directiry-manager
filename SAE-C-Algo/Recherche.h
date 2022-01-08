#include <stdio.h>
#include <string.h>
#include "en_tete.h"

/**
:entree tab:tableau de CLIENT
:entre/sortie indice:tableau d'int
:entre taille: int
:entre modif: str
:Pr�condition
:tab est un tableau de "taille" element
:et indice a la m�me taille que tab
:Postcondition:
:le tableau "client" contient les indices des clients correspondant au mot recherch�
:indice est un tableau contenant les indices de tab tri� en fonction des �l�ments de tab
:D�claration
:i,j,k: int
**/

void rech_nom(int taille, CLIENT tab[taille], char mot[20], int client[taille]);

void rech_prenom(int taille, CLIENT tab[taille], char mot[20],int client[taille]);

void rech_ville(int taille, CLIENT tab[taille], char mot[20],int client[taille]);

void rech_codePostal(int taille, CLIENT tab[taille], char mot[20],int client[taille]);

void rech_tel(int taille, CLIENT tab[taille], char mot[20],int client[taille]);

void rech_mail(int taille, CLIENT tab[taille], char mot[20],int client[taille]);

void rech_emploi(int taille, CLIENT tab[taille], char mot[20], int client[taille]);

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

