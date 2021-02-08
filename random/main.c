#include <stdio.h>
#include <stdlib.h>

void afficher(int nombreDeFois)
{
    int i;
    for(i=0;i<nombreDeFois;i++)
    {
        printf("%d", i);
    }
}

int main(int argc, char *argv[])
{
    int nombreDeFois=0, i;
    printf("Combien ?");
    scanf("%d", &nombreDeFois);
    for(i=nombreDeFois;i>0;i--)
    {
        afficher(nombreDeFois-i);
        printf("\n");
    }
    return 0;
}