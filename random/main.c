#include <stdio.h>
#include <stdlib.h>

void afficher(int nombreDeFois)
{
    int i=0;
    for(i=0;i<nombreDeFois;i++)
    {
        printf("T");
    }
}

void afficher2(int nombreDeFois)
{
    int i=0;
    for(i=nombreDeFois;i>0;i--)
    {
        printf("T");
    }   
}

int main(int argc, char *argv[])
{
    int repeat=0, nbFois=0;
    printf("Combien ?");
    scanf("%d", &repeat);
    nbFois=repeat;
    while(repeat!=0)
    {
        repeat--;
        int nombreDeFois=0, i=0;
        nombreDeFois=nbFois;
        for(i=nombreDeFois;i>0;i--)
        {
            afficher(nombreDeFois-i);
            printf("\n");
        }
        for(i=0;i<nombreDeFois;i++)
        {
            afficher2(nombreDeFois-i);
            printf("\n");
        }
    }
    return 0;
}