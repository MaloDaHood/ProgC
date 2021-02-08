#ifndef POM
#define POM

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

#define MINIMUM 0
#define MAX_LENGHT 100

int difficulte();
int nombreJoueurs(int MAX);
int game(int nombreMystere, int MAX);
int rejouer(int compteur, int nombreMystere);

#endif