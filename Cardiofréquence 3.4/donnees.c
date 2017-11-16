#include <stdio.h>
#include <stdlib.h>
#define TAILLE_MAX 10
#include "donnees.h"


int OuvertureFichier(Element *listelem, Liste *maListe)
{

    FILE* fichier = NULL;
    char chaine[TAILLE_MAX] = "", temp[TAILLE_MAX] = ""; // Chaîne vide de TAILLE_MAX
    int i; // On intègre une valeur d'itération pour afficher tout le tableau
    int etat = 0, compteur = 0;
    int poul;
    int time;

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
            }

            sscanf(chaine, "%d;%d", &time, &poul);
            printf("TIME : %d\nPOUL : %d \n", time, poul);
            insertion(&maListe, time, poul);

                compteur = compteur + 1;

                printf("Lecture ligne %d = %s\n", compteur, chaine);

                printf("----------------------------------\n\n");

                } else {

                    etat = 1;

            }

        }

        printf("Nombre de valeur(s) = %d\n", compteur);

        afficherListe(maListe);
        fclose(fichier);

return 0;
}



Liste *initialisation()
{
    Liste *liste = malloc(sizeof(*liste));
    Element *element = malloc(sizeof(*element));

    if (liste == NULL || element == NULL)
    {
        exit(EXIT_FAILURE);
    }

    element->poul = 0;
    element->time = 0;
    element->suivant = NULL;
    liste->premier = element;

    return liste;
}

void insertion(Liste *liste, int nouveauPoul, int nouveauTime)
{
    /* Création du nouvel élément */
    Element *nouveau = malloc(sizeof(*nouveau));
    if (liste == NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }
    nouveau->poul = nouveauPoul;
    nouveau->time = nouveauTime;

    /* Insertion de l'élément au début de la liste */
    nouveau->suivant = liste->premier;
    liste->premier = nouveau;
}


void afficherListe(Liste *liste)
{
    if (liste == NULL)
    {
        exit(EXIT_FAILURE);
    }

    Element *actuel = liste->premier;

    while ((actuel->poul < 1000) || (actuel->poul == NULL))
    {
        printf("%d -> ", actuel->poul);
        actuel = actuel->suivant;
    }
    printf("NULL\n");
}
