#include "struct_enum.h"

int main(int argc, char *argv[])
{
    int choix;
    Player joueurs[2];
    Volume musique=MOYEN;
    int i;
    printf("=== MENU ===\n1. struct\n2. num\n");
    scanf("%d", &choix);
    switch(choix)
    {
        case 1:
            for(i=0;i<2;i++)
            {
                printf("Nom du joueur numero %d ?\n>", i+1);
                scanf("%s", joueurs[i].nom);
                printf("Age de %s ?\n>", joueurs[i].nom);
                scanf("%d", &joueurs[i].age);
            }
            for(i=0;i<2;i++)
            {
                printf("\nJoueur %d :\nNom : %s\nAge : %d\n", i+1, joueurs[i].nom, joueurs[i].age);
            }
            break;
        case 2:
            printf("=== VOLUME ===\n1. MUET\n2. FAIBLE\n3. MOYEN\n4. FORT\n>");
            scanf("%d", &i);
            switch(i)
            {
                case 1:
                    musique=MUET;
                    break;
                case 2:
                    musique=FAIBLE;
                    break;
                case 3:
                    musique=MOYEN;
                    break;
                case 4:
                    musique=FORT;
                    break;
                default:
                    printf("C'est entre 1 et 4\n");
                    break;
            }
            printf("Volume = %d/100", musique);
            break;
        default:
            printf("C'est 1 ou 2");
            break;
    }
    return 0;
}