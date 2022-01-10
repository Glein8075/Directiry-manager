#include <stdio.h>
#include <string.h>
#include "en_tete.h"
#include "Tri_indirect.h"

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
            k++;
        }
        if (strcmp(tab[indice[milieu]].nom,mot)<0)
        {
            j=milieu-1;
        }
        else i=milieu+1;
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
    int i;
    int valider=1;
    int choix;
    char mot[50];
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
    printf("Saisissez le mot recherche: ");
    fgets(mot,50,stdin);

    switch(choix)
    {
        case 1: {tri_indirect_prenom(taille,tab,indice);
                rech_prenom(taille,tab,mot,client,indice);}
        break;
        case 2: {tri_indirect_nom(taille,tab,indice);
                rech_nom(taille,tab,mot,client,indice);}
        break;
        case 3: {tri_indirect_ville(taille,tab,indice);
                rech_ville(taille,tab,mot,client,indice);}
        break;
        case 4: {tri_indirect_codePostal(taille,tab,indice);
                rech_codePostal(taille,tab,mot,client,indice);}
        break;
        case 5: {tri_indirect_tel(taille,tab,indice);
                rech_tel(taille,tab,mot,client,indice);}
        break;
        case 6: {tri_indirect_mail(taille,tab,indice);
                rech_mail(taille,tab,mot,client,indice);}
        break;
        case 7: {tri_indirect_emploi(taille,tab,indice);
                rech_emploi(taille,tab,mot,client,indice);}
        break;
        case 8: break;
        default: {printf("erreur de saisie \n");
                 valider=0;}
    }
    if(valider==1&&client[0]!=-1)
    {
        printf("les clients correspondant sont:\n");
        i=0;
        while(client[i]!=-1)
        {
            printf("%d: %s,%s,%s,%s,%s,%s,%s \n",client[i]+1,tab[client[i]].prenom,tab[client[i]].nom,tab[client[i]].ville,tab[client[i]].codePostal,tab[client[i]].tel,tab[client[i]].mail,tab[client[i]].emploi);
            i++;
        }
        do
        {
        printf("vous voulez:\n\n");
        printf("Supprimer une personne de l'annuaire ..... 1\n");
        printf("Modifier les informations d'une personne.. 2\n");
        printf("Quitter .................................. 3\n");
        printf("Votre choix : ");
        scanf("%d", &choix);
        switch(choix)
        {

            case 1: supprimer(taille,tab,indice);
                    break;
            case 2: modification(taille,tab,indice);
                    break;
            case 3: break;
            default : printf("Erreur de saisie !\n" );
        }
        }while(choix!= 3);
    }
    else printf("il n'y a pas de client nomme %s\n",mot);
}

