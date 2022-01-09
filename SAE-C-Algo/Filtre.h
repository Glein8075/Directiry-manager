#include <stdio.h>
#include <stdlib.h>
#include "en_tete.h"

/**
:entr�e/sortie tab: tableau de CLIENT
:entr�e/sortie indice: tableau d'int
:entre motif: str
:entr�e taille: int
:Pr�condition
:tab possede "taille" �l�ments
:indice est un tableau contenant les indices de tab tri� en fonction des �l�ments de tab
:Postcondition:
:affichage des �l�ments de tab selon motif choisi
:D�claration
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
:entr�e/sortie tab: tableau de CLIENT
:entr�e/sortie indice: tableau d'int
:entr�e taille: int
:Pr�condition
:tab possede "taille" �l�ments
:indice est un tableau contenant les indices de tab tri� en fonction des �l�ments de tab
:Postcondition:
:affichage des �l�ments de tab selon un crit�re et motif choisi
:D�claration
:choix: int
:rep: char
:motif: str
*/

void filtre(int taille, CLIENT tab[taille],int indice[taille]);
