#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "en-tete.h"

/**
:entree ad:tableau de CLIENT
:entre/sortie  ai:tableau de "x" 2 dimensions
:Declaration
:i,j:int
:ipetit:int
**/

/**void tri_indirect(int t1, CLIENT ad[t1], int ai[7])
{
        int i=1,ipetit,j;
        while (i <= t1)
        {
            ipetit=ai[i];
            j=i-1;
            while (j >= 0 && ad[ipetit] < ad[ai[j])
            {
                ai[j+1]=ai[j];
                j++;
            }
            ai[j+1]=ipetit;
            i++;
        }
}

int main()
{
    ["","Becker","PARIS","75002","01.81.30.33.94","adelaide.becker@server.fr","comptable"]
    ["Benoit","Lambert","","","04.61.87.21.94","benoit.lambert@server.fr","chef d'entreprise"]
    ["Capucine","Humbert du Leroux","MARSEILLE","13008","04.13.88.22.43","capucine.humbert-du-leroux@server.fr","barman"]]}
}*/
