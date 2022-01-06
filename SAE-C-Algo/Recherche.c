#include <stdio.h>
#include <string.h>
#include "en-tete.h"

void rech_nom(int taille, CLIENT tab[taille], char mot[20], int client[taille],int indice[taille])
{
    int i,j,k,milieu;
    i=0;
    j=taille;
    k=0;
    while (i<j)
    {
        milieu=(i+j)/2;
        if (strcmp(tab[indice[milieu]].nom,mot)==0)
        {

            client[k]=milieu;
            printf("%d",client[k]);
            k++;
        }
        if (strcmp(tab[indice[milieu]].nom,mot)<0)
        {
            j=milieu-1;
        }
        else i=milieu +1;
    }
}

void rech_prenom(int taille, CLIENT tab[taille], char mot[20],int client[taille],int indice[taille])
{
    int i,j,k,milieu;
    i=0;
    j=taille;
    k=0;
    while (i<j)
    {
        milieu=(i+j)/2;
        if (strcmp(tab[milieu].prenom,mot)==0)
        {
            client[k]=milieu;
            k++;
        }
        if (strcmp(tab[milieu].prenom,mot)<0)
        {
            j=milieu-1;
        }
        else i=milieu +1;
    }
}

void rech_ville(int taille, CLIENT tab[taille], char mot[20],int client[taille],int indice[taille])
{
    int i,j,k,milieu;
    i=0;
    j=taille;
    k=0;
    while (i<j)
    {
        milieu=(i+j)/2;
        if (strcmp(tab[milieu].ville,mot)==0)
        {
            client[k]=milieu;
            k++;
        }
        if (strcmp(tab[milieu].ville,mot)<0)
        {
            j=milieu-1;
        }
        else i=milieu +1;
    }
}

void rech_codePostal(int taille, CLIENT tab[taille], char mot[20],int client[taille],int indice[taille])
{
    int i,j,k,milieu;
    i=0;
    j=taille;
    k=0;
    while (i<j)
    {
        milieu=(i+j)/2;
        if (strcmp(tab[milieu].codePostal,mot)==0)
        {
            client[k]=milieu;
            k++;
        }
        if (strcmp(tab[milieu].codePostal,mot)<0)
        {
            j=milieu-1;
        }
        else i=milieu +1;
    }
}

void rech_tel(int taille, CLIENT tab[taille], char mot[20],int client[taille],int indice[taille])
{
    int i,j,k,milieu;
    i=0;
    j=taille;
    k=0;
    while (i<j)
    {
        milieu=(i+j)/2;
        if (strcmp(tab[milieu].tel,mot)==0)
        {
            client[k]=milieu;
            k++;
        }
        if (strcmp(tab[milieu].tel,mot)<0)
        {
            j=milieu-1;
        }
        else i=milieu +1;
    }
}

void rech_mail(int taille, CLIENT tab[taille], char mot[20],int client[taille],int indice[taille])
{
    int i,j,k,milieu;
    i=0;
    j=taille;
    k=0;
    while (i<j)
    {
        milieu=(i+j)/2;
        if (strcmp(tab[milieu].mail,mot)==0)
        {
            client[k]=milieu;
            k++;
        }
        if (strcmp(tab[milieu].mail,mot)<0)
        {
            j=milieu-1;
        }
        else i=milieu +1;
    }
}

void rech_emploi(int taille, CLIENT tab[taille], char mot[20], int client[taille],int indice[taille])
{
    int i,j,k,milieu;
    i=0;
    j=taille;
    k=0;
    while (i<j)
    {
        milieu=(i+j)/2;
        if (strcmp(tab[milieu].emploi,mot)==0)
        {
            client[k]=milieu;
            k++;
        }
        if (strcmp(tab[milieu].emploi,mot)<0)
        {
            j=milieu-1;
        }
        else i=milieu +1;
    }
}

void recherche(int taille, CLIENT tab[taille], int client[taille],int indice[taille])
{
    int choix;
    char mot[50]="Dupuy";
    printf("RECHERCHE\n\n");
    printf("vous recherchez: \n");
    printf("prenom................... 1\n");
    printf("nom ..................... 2\n");
    printf("ville ................... 3\n");
    printf("code postal ............. 4\n");
    printf("numero de telephone...... 5\n");
    printf("mail .................... 6\n");
    printf("emploi .................. 7\n");
    printf("Quitter ................. 8\n");
    printf("Votre choix (saisissez le numero correspondant):");
    scanf("%d", &choix);
    getchar();
    printf("Saisissez le mot recherché: ");
    fgets(mot,50,stdin);

        //faire un case
    switch(choix)
    {
        case 1: {tri_indirect_prenom(taille,tab,indice);
                rech_prenom(taille,tab,mot,client,indice);}
        break;
        case 2: {tri_indirect_prenom(taille,tab,indice);
                affichage(taille,tab,indice);
                rech_nom(taille,tab,mot,client,indice);}
        break;
        case 3: {tri_indirect_prenom(taille,tab,indice);
                rech_ville(taille,tab,mot,client,indice);}
        break;
        case 4: {tri_indirect_prenom(taille,tab,indice);
                rech_codePostal(taille,tab,mot,client,indice);}
        break;
        case 5: {tri_indirect_prenom(taille,tab,indice);
                rech_tel(taille,tab,mot,client,indice);}
        break;
        case 6: {tri_indirect_prenom(taille,tab,indice);
                rech_mail(taille,tab,mot,client,indice);}
        break;
        case 7: {tri_indirect_prenom(taille,tab,indice);
                rech_emploi(taille,tab,mot,client,indice);}
        break;
        case 8: break;
        default: printf("erreur de saisie \n");
    }
}

