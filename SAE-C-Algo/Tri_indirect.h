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
