#include <stdio.h>
#include <string.h>
#include "main.h"

int main(int argc, char *argv[])
{
    char chaine[100], nom[100];
    printf("Tu t'appel comment ?");
    scanf("%s", nom);
    sprintf(chaine, "Tu t'appel %s !", nom);
    printf("%s", chaine);
    return 0;
}