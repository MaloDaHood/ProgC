#include <stdio.h>
#include <stdlib.h>
//#include "proto.h"

void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau);

int main(int argc, char *argv[])
{
    int tableauOriginal[4]={10, 15, 3}, tableauCopie[4]={0}, i;
    printf("=== Tableau Original ===\n");
    for(i=0;i<4;i++)
    {
        printf("%d\n", tableauOriginal[i]);
    }
    printf("=== Tableau Copie ===\n");
    copie(tableauOriginal, tableauCopie, 4);
    return 0;
}

void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau)
{
    int i;
    for(i=0;i<tailleTableau;i++)
    {
        tableauCopie[i]=tableauOriginal[i];
        printf("%d\n", tableauCopie[i]);
    }
}