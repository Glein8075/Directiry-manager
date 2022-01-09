#include <stdio.h>
#include <stdlib.h>
#include "en_tete.h"

/**
:entrée/sortie tab: tableau de CLIENT
:entrée/sortie indice: tableau d'int
:entre motif: str
:entrée taille: int
:Précondition
:tab possede "taille" éléments
:indice est un tableau contenant les indices de tab trié en fonction des éléments de tab
:Postcondition:
:affichage des éléments de tab selon motif choisi
:Déclaration
:i: int
*/

void filtre_nom(int taille, CLIENT tab[taille], int indice[taille], char motif[10]);

void filtre_prenom(int taille, CLIENT tab[taille],int indice[taille], char motif[10]);

void filtre_ville(int taille, CLIENT tab[taille],int indice[taille], char motif[10]);

void filtre_codePostal(int taille, CLIENT tab[taille],int indice[taille], char motif[10]);

void filtre_tel(int taille, CLIENT tab[taille],int indice[taille], char motif[10]);

void filtre_mail(int taille, CLIENT tab[taille],int indice[taille], char motif[10]);

void filtre_emploi(int taille, CLIENT tab[taille],int indice[taille], char motif[10]);

/**
:entrée/sortie tab: tableau de CLIENT
:entrée/sortie indice: tableau d'int
:entrée taille: int
:Précondition
:tab possede "taille" éléments
:indice est un tableau contenant les indices de tab trié en fonction des éléments de tab
:Postcondition:
:affichage des éléments de tab selon un critère et motif choisi
:Déclaration
:choix: int
:rep: char
:motif: str
*/

void filtre(int taille, CLIENT tab[taille],int indice[taille]);
