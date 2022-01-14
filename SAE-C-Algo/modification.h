#include <stdio.h>
#include <string.h>
#include "en_tete.h"

/**
:entrée/sortie tab: tableau de CLIENT
:entrée/sortie indice: tableau d'int
:entre modif: str
:entrée taille: int
:entrée choix: int
:Précondition
:tab possede "taille" éléments
:indice est un tableau contenant les indices de tab trié en fonction des éléments de tab
:choix est l'indice+1 de l'élément que l'on veux modifier dans tab
:Postcondition:
:modif est valeur dans la structure de l'élément choix-1 de tab
*/

void modif_nom(int taille, CLIENT tab[taille], char modif[20], int choix);

void modif_mail(int taille, CLIENT tab[taille], char modif[20], int choix);

void modif_prenom(int taille, CLIENT tab[taille], char modif[20], int choix);

void modif_ville(int taille, CLIENT tab[taille], char modif[20], int choix);

void modif_codePostal(int taille, CLIENT tab[taille], char modif[20], int choix);

void modif_tel(int taille, CLIENT tab[taille], char modif[20], int choix);

void modif_emploi(int taille, CLIENT tab[taille], char modif[20], int choix);

/**
:entrée/sortie tab: tableau de CLIENT
:entrée/sortie indice: tableau d'int
:entrée taille: int
:Précondition
:tab possede "taille" éléments
:indice est un tableau contenant les indices de tab trié en fonction des éléments de tab
:Postcondition:
:modification du tableau de structure tab
:Déclaration
:c1,c2: int
:modif: str
*/

void modification(int taille, CLIENT tab[taille],int indice[taille]);

/**
:entrée/sortie tab: tableau de CLIENT
:entrée/sortie indice: tableau d'int
:entrée taille: int
:Précondition
:tab possede "taille" éléments
:indice est un tableau contenant les indices de tab trié en fonction des éléments de tab
:Postcondition:
:ajout d'un nouvelle élément dans tab
*/
int ajouter(int taille, CLIENT tab[taille], int indice[taille]);

/**
:entrée/sortie tab: tableau de CLIENT
:entrée/sortie indice: tableau d'int
:entrée taille: int
:Précondition
:tab possede "taille" éléments
:indice est un tableau contenant les indices de tab trié en fonction des éléments de tab
:Postcondition:
:suppression d'un element de tab
:Déclaration
:i,choix: int
*/
int supprimer(int taille, CLIENT tab[taille],int indice[taille]);
