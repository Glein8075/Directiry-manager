#include <stdio.h>
#include <string.h>
#include "en-tete.h"

void rech_nom(int t1, CLIENT tab[t1], char mot, int client[t1])
{
    int i,j,k,milieu;
    i=0;
    j=t1;
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

void rech_prenom(int t1, CLIENT tab[t1], char mot,int client[t1])
{
    int i,j,k,milieu;
    i=0;
    j=t1;
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

void rech_ville(int t1, CLIENT tab[t1], char mot,int client[t1])
{
    int i,j,k,milieu;
    i=0;
    j=t1;
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

void rech_codePostal(int t1, CLIENT tab[t1], char mot,int client[t1])
{
    int i,j,k,milieu;
    i=0;
    j=t1;
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

void rech_tel(int t1, CLIENT tab[t1], char mot,int client[t1])
{
    int i,j,k,milieu;
    i=0;
    j=t1;
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

void rech_mail(int t1, CLIENT tab[t1], char mot,int client[t1])
{
    int i,j,k,milieu;
    i=0;
    j=t1;
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

void rech_emploi(int t1, CLIENT tab[t1], char mot, int client[t1])
{
    int i,j,k,milieu;
    i=0;
    j=t1;
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

void recherche(int t1, CLIENT tab[t1], char mot, int choix, int client[t1])
{
    if(choix==1)
    {
        rech_prenom(int t1, CLIENT tab[t1], char mot, int client[t1]);
    }
    else if(choix==2)
    {
        rech_prenom(int t1, CLIENT tab[t1], char mot, int client[t1]);
    }
    else if(choix==3)
    {
        rech_prenom(int t1, CLIENT tab[t1], char mot, int client[t1]);
    }
    else if(choix==4)
    {
        recherche_prenom(int t1, CLIENT tab[t1], char mot, int client[t1]);
    }
    else if(choix==5)
    {
        rech_prenom(int t1, CLIENT tab[t1], char mot, int client[t1]);
    }
    else if(choix==6)
    {
        rech_prenom(int t1, CLIENT tab[t1], char mot, int client[t1]);
    }
    else
    {
        rech_prenom(int t1, CLIENT tab[t1], char mot, int client[t1]);
    }

}
