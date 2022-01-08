#include <stdio.h>
#include <stdlib.h>
#include "en_tete.h"

/**
:entre/sortie tab: tableau de CLIENT
:entre/sortie indice: tableau de int
:entre taille int
:entre fichier: str
:Précondition:
:taille est la taille du tableau de structure tab
:indice est unn tableau contenant les indices de tab trié en fonction des éléments de tab
:Postcondition:
:chaque element de tab correspond une ligne de fichier
*/
void sauvegarde(int taille, CLIENT tab[taille],int indice[taille],char fichier[40]);
