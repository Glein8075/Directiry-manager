#include <stdio.h>
#include <stdlib.h>
#include "en_tete.h"

void filtre_nom(int taille, CLIENT tab[taille], char motif[10]);

void filtre_prenom(int taille, CLIENT tab[taille], char motif[10]);

void filtre_ville(int taille, CLIENT tab[taille], char motif[10]);

void filtre_codePostal(int taille, CLIENT tab[taille], char motif[10]);

void filtre_tel(int taille, CLIENT tab[taille], char motif[10]);

void filtre_mail(int taille, CLIENT tab[taille], char motif[10]);

void filtre_emploi(int taille, CLIENT tab[taille], char motif[10]);

void filtre(int taille, CLIENT tab[taille],int indice[taille]);
