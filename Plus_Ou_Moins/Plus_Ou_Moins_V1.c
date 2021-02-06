#include <stdio.h> // =import ESSENTIEL
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) // essentiel = toujours au début
{
    int rejouer=1;
    while(rejouer)
    {
        printf("\nNouvelle partie de Plus Ou Moins.\n\n");
        int nombreMystere, inputNumber=0, compteur=0, MAX=0, player=0, out=0;
        const int MIN=0;
        printf("=== DIFFICULTE ===\n1. Facile (0/100)\n2. Moyen (0/1000)\n3. Difficile (0/10000)\n==================\n>>");
        scanf("%d", &MAX);
        switch(MAX)
        {
            case 1:
                MAX=100;
                printf("Vous avez choisi le mode facile.\n");
                break;
            case 2:
                MAX=1000;
                printf("Vous avez choisi le mode moyen.\n");
                break;
            case 3:
                MAX=10000;
                printf("Vous avez choisi le mode difficile.\n");
                break;
            default:
                printf("Vous devez ecrire 1. 2 ou 3.");
                exit(0);
        }
        printf("\n=== NOMBRE DE JOUEURS ===\n1. Un Joueur\n2. Deux Joueurs\n=========================\n>>");
        scanf("%d", &player);
        switch(player)
        {
            case 1:
                printf("Vous avez choisi le mode un joueur.\n");
                srand(time(NULL));
                nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
                break;
            case 2:
                printf("Vous avez choisi le mode deux joueurs.\nLe premier joueur choisi le chiffre mystere.\n");
                scanf("%d", &nombreMystere);
                while(nombreMystere<MIN||nombreMystere>MAX)
                {
                    printf("Vous devez entrer un nombre entre %d et %d !\n>>", MIN, MAX);
                    scanf("%d", &nombreMystere);
                }
                break;
            default:
                printf("Vous devez ecrire soit 1 soit 2.");
                exit(0);
        }
        do
        {
            printf("Quel est le nombre ?\n>>");
            scanf("%d", &inputNumber);
            compteur++;
            if(inputNumber==nombreMystere)
            {
                printf("Bravo, vous avez trouve le nombre mystere !!! C'etait %d.\nVous l'avez trouve en %d coups.\n", nombreMystere, compteur);
                printf("=== REJOUER ? ===\n1. Oui\n2. Non\n=================\n>>");
                scanf("%d", &rejouer);
                switch(rejouer)
                {
                    case 1:
                        rejouer=1;
                        break;
                    case 2:
                        rejouer=0;
                        break;
                    default:
                        printf("Vous de vez écrire soit 1 soit 2.");
                        exit(0);
                }
            }
            else if(inputNumber<MIN||inputNumber>MAX)
            {
                printf("On cherhe un chiffre entre %d et %d\n", MIN, MAX);
            }
            else if(inputNumber>nombreMystere)
            {
                printf("C'est moins !\n");
            }
            else if(inputNumber<nombreMystere)
            {
                printf("C'est plus !\n");
            }
            else
            {
                printf("ERREUR\n");
                exit(0);
            }
        }while(inputNumber!=nombreMystere);
        printf("\n\n");
    }
    return 0; // fin du programme
}