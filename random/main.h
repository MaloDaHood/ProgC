#ifndef MAIN
#define MAIN

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <conio.h>

#define LONGUEUR_MAX 100

int coup_joueur(char nom[LONGUEUR_MAX]);
int coup_bot();
void comparaison(int coup_joueur_int, int coup_bot_int);
int quitter(char nom[LONGUEUR_MAX]);
void erreur();

#endif