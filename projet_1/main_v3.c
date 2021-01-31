#include <stdio.h>
#include <stdlib.h>
#include "main_v3.h"

int main(int argc, char *argv[])
{
    
    printf("\n=== PASSAGE D'UN TABLEAU DE 4 VALEURS DIIFERENTES DANS UN ORDRE CROISSANT ===\n");
    int tableau[4]={0}, i, max, min, midHigh, midLow;
    for(i=0;i<4;i++)
    {
        printf("\n");
        printf("Valeurs numero %d du tableau ?\n", i);
        scanf("%d", &tableau[i]);
    }
    max=plusGrand(tableau);
    min=plusPetit(tableau, max);
    printf("%d, %d\n", max, min);
    midHigh=sec_grand(tableau, max, min);
    midLow=sec_petit(tableau, max, min, midHigh);

    ordonnerTableau(tableau, 4);
    return 0;
}

int plusGrand(int tableau[])
{
    int max, tableau2[3]={0}, i;
    if(tableau[0]>tableau[1]&&tableau[0]>tableau[2]&&tableau[0]>tableau[3])
    {
        max=tableau[0];
    }
    else if(tableau[1]>tableau[0]&&tableau[1]>tableau[2]&&tableau[1]>tableau[3])
    {
        max=tableau[1];
    }
    else if(tableau[2]>tableau[1]&&tableau[2]>tableau[0]&&tableau[2]>tableau[3])
    {
        max=tableau[2];
    }
    else
    {
        max=tableau[3];
    }
    return max;
}

int plusPetit(int tableau[], int max)
{
    int min;
    if(tableau[0]!=max&&tableau[0]<tableau[1]&&tableau[0]<tableau[2]&&tableau[0]<tableau[3])
    {
        min=tableau[0];
    }
    else if(tableau[1]!=max&&tableau[1]<tableau[0]&&tableau[1]<tableau[2]&&tableau[1]<tableau[3])
    {
        min=tableau[1];
    }
    else if(tableau[2]!=max&&tableau[2]<tableau[1]&&tableau[2]<tableau[0]&&tableau[2]<tableau[3])
    {
        min=tableau[2];
    }
    else
    {
        min=tableau[3];
    }
    return min;
}

int sec_grand(int tableau[], int max, int min)
{
    int midHigh;
    if(tableau[0]!=max&&tableau[0]!=min&&tableau[0])
    return midHigh;
}

int sec_petit(int tableau[], int max, int min, int midHigh)
{
    int midLow;
    if(tableau[0]!=max&&tableau[0]!=min&&tableau[0]!=midHigh)
    {
        midLow=tableau[0];
    }
    else if(tableau[1]!=max&&tableau[1]!=min&&tableau[1]!=midHigh)
    {
        midLow=tableau[1];
    }
    else if(tableau[2]!=max&&tableau[2]!=min&&tableau[2]!=midHigh)
    {
        midLow=tableau[2];
    }
    else
    {
        midLow=tableau[3];
    }
    return midLow;
}

void ordonnerTableau(int tableau[], int tailleTableau)
{

}