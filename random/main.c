#include "main.h"

int main(int argc, char const *argv[])
{
    int newGame=1;
    while(newGame==1)
    {
        char nom[LONGUEUR_MAX];
        printf("Bienvenue dans une nouvelle partie de pierre, feuille, ciseau.\nQuel est votre nom ?\n>");
        scanf("%s", nom);
        printf("C'est parti %s !\n", nom);
        comparaison(coup_joueur(nom), coup_bot());
    }
    return 0;
}

int coup_joueur(char nom[LONGUEUR_MAX])
{
    int bonne_reponse=1;
    while(bonne_reponse==1)
    {
        int choix_joueur_int=0;
        printf("Choisis ton coup %s.\n1. Pierre\n2. Feuille\n3. Ciseau\n4. QUITTER\n>>", nom);
        scanf("%d", &choix_joueur_int);
        switch(choix_joueur_int)
        {
            case 1:
                printf("Tu as choisis Pierre.\n");
                return choix_joueur_int;
            case 2:
                printf("Tu as choisis Feuille.\n");
                return choix_joueur_int;
            case 3:
                printf("Tu as choisis Ciseau.\n");
                return choix_joueur_int;
            case 4:
                bonne_reponse=quitter(nom);
            default:
                printf("Il faut choisir une des options disponibles.\n");
                bonne_reponse=1;
        }
    }
}

int coup_bot()
{
    int choix_bot_int=0;
    srand(time(NULL));
    return choix_bot_int=(rand()%(3-1+1))+1;
}

/*
 1 == Pierre
 2 == Feuille
 3 == Ciseau
*/

void comparaison(int coup_joueur_int, int coup_bot_int)
{
    char coup_joueur[LONGUEUR_MAX], coup_bot[LONGUEUR_MAX];
    switch(coup_joueur_int)
    {
        case 1:
            coup_joueur=="Pierre";
        case 2:
            coup_joueur=="Feuille";
        case 3:
            coup_joueur=="Ciseau";
        default:
            erreur();
    }
    switch(coup_bot_int)
    {
        case 1:
            coup_bot=="Pierre";
        case 2:
            coup_bot=="Feuille";
        case 3:
            coup_bot=="Ciseau";
        default:
            erreur();
    }
    if(coup_joueur==coup_bot)
    {
        //EGALITE
    }
    else if(coup_joueur=="Pierre" && coup_bot=="Ciseau")
    {
        //VICTOIRE JOUEUR
    }
    else if(coup_joueur=="Feuille" && coup_bot=="Pierre")
    {
        //VICTOIRE JOUEUR
    }
    else if(coup_joueur=="Ciseau" && coup_bot=="Feuille")
    {
        //VICTOIRE JOUEUR
    }
    else
    {
        //VICTOIRE BOT
    }
    
}

int quitter(char nom[LONGUEUR_MAX])
{
    int bonne_reponse=1;
    while(bonne_reponse==1)
    {
        int quit=0;
        char yesno[LONGUEUR_MAX];
        printf("T'es sur de vouloir quitter %s ? (oui/non)\n", nom);
        scanf("%s", yesno);
        if(yesno=="non")
        {
            return quit=1;
        }
        else if (yesno=="oui")
        {
            printf("D'accord %s pas de soucis.", nom);
            getch();
            exit(1);
        }
        else
        {
            printf("Il faut ecrire soit 'oui' soit 'non'.\n");
            bonne_reponse=1;
        }
    }
}

void erreur()
{
    printf("Erreur\nFin du programme.");
    getch();
    exit(1);
}