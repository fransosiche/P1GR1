#include <stdio.h>
#include <stdlib.h>
#define TAILLE_MAX 10 // Tableau de taille 60, car chaque case = 1 seconde
#include "donnees.h"


int OuvertureFichier()
{
    FILE* fichier = NULL; // le pointeur du fichier est initialisé à null
    char chaine[TAILLE_MAX] = "", temp[TAILLE_MAX] = "", Pointeur[TAILLE_MAX] = ""; // Chaîne vide de TAILLE_MAX
    int i; // On intègre une valeur d'itération pour afficher tout le tableau
    int etat = 0, compteur = 0;
    int actuel = 0;
    int actuelv2 = 0;
    int ii, j, debut, tab[TAILLE_MAX];

    fichier = fopen("battements.csv", "r");
    printf("\n");

        fichier = fopen("battements.csv", "r");
        if (!fichier) {
                return EXIT_FAILURE;
        }


        while(etat !=1)
        {

            fgets(chaine, TAILLE_MAX, fichier);

            if(strcmp(chaine, temp) != 0){
            for(i=0; i<TAILLE_MAX; i++){
                    temp[i] = chaine[i];
                    sscanf(chaine, "%d;%d", &temps, &poul);
                    printf("%d", temps, poul);
            }



                compteur = compteur + 1;

                printf("Lecture ligne %d = %s\n", compteur, chaine);

                printf("----------------------------------\n\n");

                } else {

                    etat = 1;

            }

        }

        printf("Nombre de valeur(s) = %d\n", compteur);


        fclose(fichier);


return 0;
}


