#include <stdio.h>
#include <stdlib.h>
#include "en_tete.h"

/**
:entree/sortie tab:tableau de CLIENT
:entre/sortie indice: tableau d'int
:entre taille: int
:Pr�condition
:tab est un tableau de "taille" element
:indice est un tableau contenant les indices de tab tri� en fonction des �l�ments de tab
:Postcondition
:affichage des �l�ments de tab
:Declaration
:i:int
**/

void affichage(int taille, CLIENT tab[taille],int indice[taille]);
