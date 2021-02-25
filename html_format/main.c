#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE* fichierInput = NULL;
    FILE* fichierOutput = NULL;
    int caractere = 0;
    char emplacementFichierInput[100], emplacementFichierOutput[100];
    printf("Quel est le fichier a convertir ?\nVeuillez indiquer le chemin d'acces si le fichier ne se trouve pas dans le meme dossier que le programme.\n");
    scanf("%s", emplacementFichierInput);
    printf("\nVeuillez indiquer l'emplacement et le nom du fichier de sorti a creer (ainsi que son extension).\n");
    scanf("%s", emplacementFichierOutput);
    fichierInput = fopen(emplacementFichierInput, "r");
    fichierOutput = fopen(emplacementFichierOutput, "w");
    if (fichierInput != NULL && fichierOutput != NULL)
    {
        do
        {
            caractere = fgetc(fichierInput);
            if (caractere == '<')
            {
                fprintf(fichierOutput, "&lt;");
            }
            else if (caractere == '>')
            {
                fprintf(fichierOutput, "&gt;");
            }
            else if (caractere == '"')
            {
                fprintf(fichierOutput, "&quot;");
            }
            else if (caractere == EOF)
            {
                break;
            }
            else
            {
                fputc(caractere, fichierOutput);
            }
        } while (caractere != EOF);
        fclose(fichierInput);
        fclose(fichierOutput);
    }
    else
    {
        printf("Fichier introuvable ou chemin d'acces introuvable.");
    }
    return 0;
}