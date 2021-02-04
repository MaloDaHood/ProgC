#include <stdio.h>
#include <stdlib.h>
#include "main_v2.h"

int main(int argc, char *argv[])
{
    int tableau[4]={15, 22, 81, 13};
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
    comparateur(valeurZero, valeurOne, valeurTwo, valeurThree);
}

int comparateur(int v0, int v1, int v2, int v3)
{
    //printf("%d\n%d\n%d\n%d\n", v0, v1, v2, v3);
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
    printf("%d\n%d\n%d\n%d", max, midHigh, midLow, min);
}