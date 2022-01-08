#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "en_tete.h"


/**
:entree tab:tableau de CLIENT
:entre/sortie indice:tableau d'int
:entre taille: int
:Précondition
:tab est un tableau de "taille" element
:et indice a la même taille que tab
:Postcondition
: indice est trier dans l'ordre des éléments de tab qu'ils représentent
:Declaration
:i,j:int
:ipetit:int
**/

void tri_indirect_nom(int taille, CLIENT tab[taille], int indice[taille]);

void tri_indirect_prenom(int taille,CLIENT tab[taille],int indice[taille]);

void tri_indirect_ville(int taille, CLIENT tab[taille], int indice[taille]);

void tri_indirect_codePostal(int taille, CLIENT tab[taille], int indice[taille]);

void tri_indirect_tel(int taille, CLIENT tab[taille], int indice[taille]);

void tri_indirect_mail(int taille, CLIENT tab[taille], int indice[taille]);

void tri_indirect_emploi(int taille, CLIENT tab[taille], int indice[taille]);

/**
:entree/sortie tab:tableau de CLIENT
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
