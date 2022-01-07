#include <stdio.h>
#include <string.h>
#include "en-tete.h"

void modif_nom(int taille, CLIENT tab[taille], char modif[20], int choix);

void modif_mail(int taille, CLIENT tab[taille], char modif[20], int choix);

void modif_prenom(int taille, CLIENT tab[taille], char modif[20], int choix);

void modif_ville(int taille, CLIENT tab[taille], char modif[20], int choix);

void modif_codePostal(int taille, CLIENT tab[taille], char modif[20], int choix);

void modif_tel(int taille, CLIENT tab[taille], char modif[20], int choix);

void modif_emploi(int taille, CLIENT tab[taille], char modif[20], int choix);


void modification(int taille, CLIENT tab[taille],int indice[taille]);

void ajouter(int taille, CLIENT tab[taille], int indice[taille]);

void supprimer(int taille, CLIENT tab[taille],int indice[taille]);
