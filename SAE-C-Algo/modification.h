#include <stdio.h>
#include <string.h>
#include "en_tete.h"

/**
:entr�e/sortie tab: tableau de CLIENT
:entr�e/sortie indice: tableau d'int
:entre modif: str
:entr�e taille: int
:entr�e choix: int
:Pr�condition
:tab possede "taille" �l�ments
:indice est un tableau contenant les indices de tab tri� en fonction des �l�ments de tab
:choix est l'indice+1 de l'�l�ment que l'on veux modifier dans tab
:Postcondition:
:modif est valeur dans la structure de l'�l�ment choix-1 de tab
*/

void modif_nom(int taille, CLIENT tab[taille], char modif[20], int choix);

void modif_mail(int taille, CLIENT tab[taille], char modif[20], int choix);

void modif_prenom(int taille, CLIENT tab[taille], char modif[20], int choix);

void modif_ville(int taille, CLIENT tab[taille], char modif[20], int choix);

void modif_codePostal(int taille, CLIENT tab[taille], char modif[20], int choix);

void modif_tel(int taille, CLIENT tab[taille], char modif[20], int choix);

void modif_emploi(int taille, CLIENT tab[taille], char modif[20], int choix);

/**
:entr�e/sortie tab: tableau de CLIENT
:entr�e/sortie indice: tableau d'int
:entr�e taille: int
:Pr�condition
:tab possede "taille" �l�ments
:indice est un tableau contenant les indices de tab tri� en fonction des �l�ments de tab
:Postcondition:
:modification du tableau de structure tab
:D�claration
:c1,c2: int
:modif: str
*/

void modification(int taille, CLIENT tab[taille],int indice[taille]);

/**
:entr�e/sortie tab: tableau de CLIENT
:entr�e/sortie indice: tableau d'int
:entr�e taille: int
:Pr�condition
:tab possede "taille" �l�ments
:indice est un tableau contenant les indices de tab tri� en fonction des �l�ments de tab
:Postcondition:
:ajout d'un nouvelle �l�ment dans tab
*/
int ajouter(int taille, CLIENT tab[taille], int indice[taille]);

/**
:entr�e/sortie tab: tableau de CLIENT
:entr�e/sortie indice: tableau d'int
:entr�e taille: int
:Pr�condition
:tab possede "taille" �l�ments
:indice est un tableau contenant les indices de tab tri� en fonction des �l�ments de tab
:Postcondition:
:suppression d'un element de tab
:D�claration
:i,choix: int
*/
int supprimer(int taille, CLIENT tab[taille],int indice[taille]);
