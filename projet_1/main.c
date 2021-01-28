#include <stdio.h>
#include <stdlib.h>

void decoupeMinutes(int *pointeurHeures, int *pointeurMinutes);

int main(int argc, char *argv[])
{
    int heures = 0, minutes = 90;

    decoupeMinutes(&heures, &minutes);

    printf("%d heures et %d minutes", heures, minutes);

    return 0;
}

void decoupeMinutes(int *pointeurHeures, int *pointeurMinutes)
{
    *pointeurHeures = *pointeurMinutes / 60;  // 90 / 60 = 1
    *pointeurMinutes = *pointeurMinutes % 60; // 90 % 60 = 30
}