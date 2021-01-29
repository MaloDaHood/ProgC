#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char *argv[])
{
    int tableau[4]={15, 81, 22, 13};
    ordonnerTableau(tableau, 4);
    return 0;
}

void ordonnerTableau(int tableau[], int tailleTableau)
{
    int i, valeurTableau, x;
    for(i=0;i<tailleTableau;i++)
    {
        valeurTableau=tableau[i];
        stock(valeurTableau, i);
    }
}

int stock(int valeurTableau, int i)
{
    int x=-1;
    int valeurZero=x, valeurOne=x, valeurTwo=x, valeurThree=x; 
    if(i==0)
    {
        valeurZero=valeurTableau;
        //printf("%d\n%d", valeurTableau, valeurZero);  // OK
    }
    else if(i==1)
    {
        valeurOne=valeurTableau;
        //printf("%d\n%d", valeurTableau, valeurOne);  // OK
    }
    else if(i==2)
    {
        valeurTwo=valeurTableau;
        //printf("%d\n%d", valeurTableau, valeurTwo);  // OK 
    }
    else if(i==3)
    {
        valeurThree=valeurTableau;
        //printf("%d\n%d", valeurTableau, valeurThree);  // OK
    }
    else
    {
        printf("ERREUR");
        return 1;
    }

    if(valeurZero!=x&&valeurOne!=x&&valeurTwo!=x&&valeurThree!=x)  // ERREUR ICI
    {
        printf("%d\n%d\n%d\n%d", valeurZero, valeurOne, valeurTwo, valeurThree);  // NON OK
        comparateur(valeurZero, valeurOne, valeurTwo, valeurThree);
    }
}

int comparateur(int nb0, int nb1, int nb2, int nb3)
{
    printf("%d\n %d\n %d\n %d\n", nb0, nb1, nb2, nb3);  // NON OK 
}