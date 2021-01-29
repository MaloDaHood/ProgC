#include <stdio.h>
#include <stdlib.h>
#include "main_v2.h"

int main(int argc, char *argv[])
{
    int tableau[4]={15, 81, 22, 13};
    ordonnerTableau(tableau, 4);
    return 0;
}

void ordonnerTableau(int tableau[], int tailleTableau)
{
    int i, valeurTableau, valeurZero, valeurOne, valeurTwo, valeurThree;
    for(i=0;i<tailleTableau;i++)
    {
        //valeurTableau=tableau[i];
        if(i==0)
        {
            //stock0(valeurTableau);
            valeurZero=tableau[i];
            printf("%d\n", valeurZero);
        }
        else if(i==1)
        {
            //stock1(valeurTableau);
            valeurOne=tableau[i];
            printf("%d\n", valeurOne);
        }
        else if(i==2)
        {
            //stock2(valeurTableau);
            valeurTwo=tableau[i];
            printf("%d\n", valeurTwo);
        }
        else
        {
            //stock3(valeurTableau);
            valeurThree=tableau[i];
            printf("%d\n", valeurThree);
        }
        
    }
    comparateur(valeurZero, valeurOne, valeurTwo, valeurThree);
}