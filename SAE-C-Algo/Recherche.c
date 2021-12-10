#include <stdio.h>
#include <string.h>
#include "en-tete.h"

void rech_nom(int taille, CLIENT tab[taille], char mot, int client[taille])
{
    int i,j,k,milieu;
    i=0;
    j=taille;
    k=0;
    while (i<j)
    {
        milieu=(i+j)/2;
        if (strcmp(tab[milieu].nom,mot)==0)
            client[k]=milieu;
        if (strcmp(tab[milieu].nom,mot)<0)
            j=milieu-1;
        else i=milieu +1;
    }
}

void rech_prenom(int taille, CLIENT tab[taille], char mot,int client[taille])
{
    int i,j,k,milieu;
    i=0;
    j=taille;
    k=0;
    while (i<j)
    {
        milieu=(i+j)/2;
        if (strcmp(tab[milieu].prenom,mot)==0)
            client[k]=milieu;
        if (strcmp(tab[milieu].prenom,mot)<0)
            j=milieu-1;
        else i=milieu +1;
    }
}

void rech_ville(int taille, CLIENT tab[taille], char mot,int client[taille])
{
    int i,j,k,milieu;
    i=0;
    j=taille;
    k=0;
    while (i<j)
    {
        milieu=(i+j)/2;
        if (strcmp(tab[milieu].ville,mot)==0)
            client[k]=milieu;
        if (strcmp(tab[milieu].ville,mot)<0)
            j=milieu-1;
        else i=milieu +1;
    }
}

void rech_codePostal(int taille, CLIENT tab[taille], char mot,int client[taille])
{
    int i,j,k,milieu;
    i=0;
    j=taille;
    k=0;
    while (i<j)
    {
        milieu=(i+j)/2;
        if (strcmp(tab[milieu].codePostal,mot)==0)
            client[k]=milieu;
        if (strcmp(tab[milieu].codePostal,mot)<0)
            j=milieu-1;
        else i=milieu +1;
    }
}

void rech_tel(int taille, CLIENT tab[taille], char mot,int client[taille])
{
    int i,j,k,milieu;
    i=0;
    j=taille;
    k=0;
    while (i<j)
    {
        milieu=(i+j)/2;
        if (strcmp(tab[milieu].tel,mot)==0)
            client[k]=milieu;
        if (strcmp(tab[milieu].tel,mot)<0)
            j=milieu-1;
        else i=milieu +1;
    }
}

void rech_mail(int taille, CLIENT tab[taille], char mot,int client[taille])
{
    int i,j,k,milieu;
    i=0;
    j=taille;
    k=0;
    while (i<j)
    {
        milieu=(i+j)/2;
        if (strcmp(tab[milieu].mail,mot)==0)
            client[k]=milieu;
        if (strcmp(tab[milieu].mail,mot)<0)
            j=milieu-1;
        else i=milieu +1;
    }
}

void rech_emploi(int taille, CLIENT tab[taille], char mot, int client[taille])
{
    int i,j,k,milieu;
    i=0;
    j=taille;
    k=0;
    while (i<j)
    {
        milieu=(i+j)/2;
        if (strcmp(tab[milieu].emploi,mot)==0)
            client[k]=milieu;
        if (strcmp(tab[milieu].emploi,mot)<0)
            j=milieu-1;
        else i=milieu +1;
    }
}

void recherche(int taille, CLIENT tab[taille], char mot, int choix, int client[taille])
{
    if(choix==1)
    {
        rech_prenom(int taille, CLIENT tab[taille], char mot, int client[taille]);
    }
    else if(choix==2)
    {
        rech_nom(int taille, CLIENT tab[taille], char mot, int client[taille]);
    }
    else if(choix==3)
    {
        rech_ville(int taille, CLIENT tab[taille], char mot, int client[taille]);
    }
    else if(choix==4)
    {
        recherche_codePostal(int taille, CLIENT tab[taille], char mot, int client[taille]);
    }
    else if(choix==5)
    {
        rech_tel(int taille, CLIENT tab[taille], char mot, int client[taille]);
    }
    else if(choix==6)
    {
        rech_mail(int taille, CLIENT tab[taille], char mot, int client[taille]);
    }
    else
    {
        rech_emploi(int taille, CLIENT tab[taille], char mot, int client[taille]);
    }

}
