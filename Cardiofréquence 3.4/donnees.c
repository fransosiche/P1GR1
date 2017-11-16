#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"
#include "string.h"

Liste* OuvertureFichier()
{
    FILE* fichier = NULL;

    int i;
    int etat = 0;
    int poul;
    int time;
    compteur = 0;

    char chaine[BUFSIZ] = "", temp[BUFSIZ] = "", date[BUFSIZ] = "";

    Liste* maListe = initialisation();


    printf("\n                       Ouverture du Fichier csv...\n\n");
    printf("                Initialisation des valeurs en cours...\n\n");
    printf("|-------------------------------------------------------------------|\n\n\n");

    fichier = fopen("battements.csv", "r");
    if (!fichier) {
        exit(EXIT_FAILURE);
    }


    while(etat !=1)
    {
        fgets(chaine, BUFSIZ, fichier);

        if(strcmp(chaine, temp) != 0){
            for(i=0; i<BUFSIZ; i++){
            temp[i] = chaine[i];
        }

        compteur = compteur + 1;

        sscanf(chaine, "%d;%d", &poul, &time);

        printf("Lecture ligne %d = %s\n", compteur, chaine);


        printf("TIME : %d\nPOUL : %d \n\n", time, poul);

        insertion(maListe, poul, time);

        printf("----------------------------------\n\n");

        } else {

        etat = 1;

        }
    }


    printf("Nombre de valeur(s) = %d\n", compteur);

    fclose(fichier);

    return maListe;
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

    while ((actuel != NULL) && ((actuel->poul < 1000) || (actuel->poul == NULL)))
    {
        printf("%d -> ", actuel->poul);
        actuel = actuel->suivant;
    }
    printf("NULL\n");
}
