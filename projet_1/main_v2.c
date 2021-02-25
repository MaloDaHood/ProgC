#include <stdio.h>
#include <stdlib.h>
#include "main_v2.h"

int main(int argc, char *argv[])
{
    int i, tableau[4]={0};
    printf("\n=== PASSAGE D'UN TABLEAU DE 4 VALEURS DANS UN ORDRE CROISSANT ===\n");
    for(i=0;i<4;i++)
    {
        printf("\n");
        printf("Valeurs numero %d du tableau ?\n", i);
        scanf("%d", &tableau[i]);
    }
    ordonnerTableau(tableau, 4);
    return 0;
}

void ordonnerTableau(int tableau[], int tailleTableau)
{
    int i, valeurTableau, valeurZero, valeurOne, valeurTwo, valeurThree;
    for(i=0;i<tailleTableau;i++)
    {
        if(i==0)
        {
            valeurZero=tableau[i];
        }
        else if(i==1)
        {
            valeurOne=tableau[i];
        }
        else if(i==2)
        {
            valeurTwo=tableau[i];
        }
        else
        {
            valeurThree=tableau[i];
        }
        
    }
    printf("\ntableau = {%d, %d, %d, %d}\n", valeurZero, valeurOne, valeurTwo, valeurThree);
    comparateur(valeurZero, valeurOne, valeurTwo, valeurThree);
}

int comparateur(int v0, int v1, int v2, int v3)
{
    int max, midHigh, midLow, min;
    if(v0>v1&&v0>v2&&v0>v3)
    {
        max=v0;
        if(v1>v2&&v1>v3)
        {
            midHigh=v1;
            if(v2>v3)
            {
                midLow=v2;
                min=v3;
            }
            else
            {
                midLow=v3;
                min=v2;
            }
        }
        else if(v2>v1&&v2>v3)
        {
            midHigh=v2;
            if(v1>v3)
            {
                midLow=v1;
                min=v3;
            }
            else
            {
                midLow=v3;
                min=v1;
            }
        }
        else if(v3>v1&&v3>v2)
        {
            midHigh=v3;
            if(v1>v2)
            {
                midLow=v1;
                min=v2;
            }
            else
            {
                midLow=v2;
                min=v1;
            }
        }
    }
    else if(v1>v0&&v1>v2&&v1>v3)
    {
        max=v1;
        if(v0>v2&&v0>v3)
        {
            midHigh=v0;
            if(v2>v3)
            {
                midLow=v2;
                min=v3;
            }
            else
            {
                midLow=v3;
                min=v2;
            }
        }
        else if(v2>v0&&v2>v3)
        {
            midHigh=v2;
            if(v0>v3)
            {
                midLow=v0;
                min=v3;
            }
            else
            {
                midLow=v3;
                min=v0;
            }
        }
        else if(v3>v0&&v3>v2)
        {
            midHigh=v3;
            if(v0>v2)
            {
                midLow=v0;
                min=v2;
            }
            else
            {
                midLow=v2;
                min=v0;
            }
        }
    }
    else if(v2>v0&&v2>v1&&v2>v3)
    {
        max=v2;
        if(v1>v0&&v1>v3)
        {
            midHigh=v1;
            if(v0>v3)
            {
                midLow=v0;
                min=v3;
            }
            else
            {
                midLow=v3;
                min=v0;
            }
        }
        else if(v0>v1&&v0>v3)
        {
            midHigh=v0;
            if(v1>v3)
            {
                midLow=v1;
                min=v3;
            }
            else
            {
                midLow=v3;
                min=v1;
            }
        }
        else if(v3>v1&&v3>v0)
        {
            midHigh=v3;
            if(v0>v1)
            {
                midLow=v0;
                min=v1;
            }
            else
            {
                midLow=v1;
                min=v0;
            }
        }
    }
    else
    {
        max=v3;
        if(v1>v2&&v1>v0)
        {
            midHigh=v1;
            if(v0>v2)
            {
                midLow=v0;
                min=v2;
            }
            else
            {
                midLow=v2;
                min=v0;
            }
        }
        else if(v2>v1&&v2>v0)
        {
            midHigh=v2;
            if(v0>v1)
            {
                midLow=v0;
                min=v1;
            }
            else
            {
                midLow=v1;
                min=v0;
            }
        }
        else if(v0>v1&&v0>v2)
        {
            midHigh=v0;
            if(v1>v2)
            {
                midLow=v1;
                min=v2;
            }
            else
            {
                midLow=v2;
                min=v1;
            }
        }
    }
    tableauCopie(max, midHigh, midLow, min);
}
void tableauCopie(int max, int midHigh, int midLow, int min)
{
    int tableau2[4]={0}, i;
    tableau2[0]=min;
    tableau2[1]=midLow;
    tableau2[2]=midHigh;
    tableau2[3]=max;
    printf("tableauCopie = {%d, %d, %d, %d}\n\n", tableau2[0], tableau2[1], tableau2[2], tableau2[3]);
}
