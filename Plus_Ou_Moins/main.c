#include "POM.h"

int main(int argc, char *argv[])
{
    int newGame=1, nombreMystere=0;
    while(newGame)
    {
        int MAX=0;
        printf("\nNouvelle partie de Plus Ou Moins.\n\n");
        MAX=difficulte();
        nombreMystere=nombreJoueurs(MAX);
        newGame=game(nombreMystere, MAX);
    }
    return 0;
}
int difficulte()
{
    int MAX=0;
    printf("=== DIFFICULTE ===\n1. Facile (0/100)\n2. Moyen (0/1000)\n3. Difficile (0/10000)\n==================\n>>");
    scanf("%d", &MAX);
    switch(MAX)
    {
        case 1:
            printf("Vous avez choisi le mode facile.\n");
            return MAX=100;
        case 2:
            printf("Vous avez choisi le mode moyen.\n");
            return MAX=1000;
        case 3:
            printf("Vous avez choisi le mode difficile.\n");
            return MAX=10000;
        default:
            printf("Vous devez ecrire 1. 2 ou 3.");
            exit(0);
    }
}
int nombreJoueurs(int MAX)
{
    int player=0, nombreMystere=0;
    char nomJoueur1[MAX_LENGHT]="", nomJoueur2[MAX_LENGHT]="";
    printf("\n=== NOMBRE DE JOUEURS ===\n1. Un Joueur\n2. Deux Joueurs\n=========================\n>>");
    scanf("%d", &player);
    switch(player)
    {
        case 1:
            printf("Vous avez choisi le mode un joueur.\nQuel est votre nom ?\n>");
            scanf("%s", nomJoueur1);
            srand(time(NULL));
            return nombreMystere=(rand()%(MAX-MINIMUM+1))+MINIMUM;
        case 2:
            printf("Vous avez choisi le mode deux joueurs.\nQuel est le nom du premier joueur ?\n>");
            scanf("%s", nomJoueur1);
            printf("Quel est le nom du deuxieme joueur ?\n>");
            scanf("%s", nomJoueur2);
            printf("%s choisi le chiffre mystere et %s regarde pas !\n", nomJoueur2, nomJoueur1);
            scanf("%d", &nombreMystere);
            while(nombreMystere<MINIMUM||nombreMystere>MAX)
            {
                printf("Vous devez entrer un nombre entre %d et %d !\n>>", MINIMUM, MAX);
                scanf("%d", &nombreMystere);
            }
            return nombreMystere;
        default:
            printf("Vous devez ecrire soit 1 soit 2.");
            exit(0);
    }
}
int game(int nombreMystere, int MAX)
{
    int inputNumber=0, compteur=0;
    do
    {
        printf("Quel est le nombre ?\n>>");
        scanf("%d", &inputNumber);
        compteur++;
        if(inputNumber==nombreMystere)
        {
            return rejouer(compteur, nombreMystere);
        }
        else if(inputNumber<MINIMUM||inputNumber>MAX)
        {
            printf("On cherhe un chiffre entre %d et %d\n", MINIMUM, MAX);
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
int rejouer(int compteur, int nombreMystere)
{
    int newGame;
    printf("Bravo, vous avez trouve le nombre mystere !!! C'etait %d.\nVous l'avez trouve en %d coups.\n", nombreMystere, compteur);
    printf("=== REJOUER ? ===\n1. Oui\n2. Non\n=================\n>>");
    scanf("%d", &newGame);
    switch(newGame)
    {
        case 1:
            return newGame=1;
        case 2:
            return newGame=0;
        default:
            printf("Vous devez écrire soit 1 soit 2.");
            exit(0);
    }
}