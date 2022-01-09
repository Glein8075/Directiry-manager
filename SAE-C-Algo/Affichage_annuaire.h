#include <stdio.h>
#include <stdlib.h>
#include "en_tete.h"

/**
:entree/sortie tab:tableau de CLIENT
:entre/sortie indice: tableau d'int
:entre taille: int
:Précondition
:tab est un tableau de "taille" element
:indice est un tableau contenant les indices de tab trié en fonction des éléments de tab
:Postcondition
:affichage des éléments de tab
:Declaration
:i:int
**/

void affichage(int taille, CLIENT tab[taille],int indice[taille]);
