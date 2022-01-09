#include <stdio.h>
#include <string.h>
#include "en_tete.h"

/**
:entree tab:tableau de CLIENT
:entre/sortie indice:tableau d'int
:entre/sortie client: tableau d'int
:entre taille: int
:Précondition
:tab est un tableau de "taille" element
:indice est un tableau contenant les indices de tab trié en fonction des éléments de tab
:Postcondition:
:le tableau "client" contient les indices des clients correspondant au mot recherché
:Déclaration
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
:entrée/sortie tab: tableau de CLIENT
:entrée/sortie client tableau d'int
:entrée/sortie indice: tableau d'int
:entrée taille: int
:Précondition
:tab possede "taille" éléments
:indice est un tableau contenant les indices de tab trié en fonction des éléments de tab
:Postcondition:
:le tableau "client" contient les indices des clients correspondant au mot recherché
:Déclaration
:valider: int
:choix: int
:mot: str
*/
void recherche(int taille, CLIENT tab[taille], int client[taille],int indice[taille]);

