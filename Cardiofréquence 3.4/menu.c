#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "donnees.h"

int Menu_De_Base()

{
    int i;
    int choix;
    int choix2;
    Liste* liste = OuvertureFichier();
    do
    {
    printf("\n\n                 Bienvenue dans la console ! \n\n");
    printf("Veuillez taper ce que vous voulez effectuer s'il vous plait ! \n\n");
    printf("|-------------------------------------------------------------------|\n");
    printf("| 1) Afficher les donnees dans l'ordre du temps                     |\n");
    printf("|-------------------------------------------------------------------|\n");
    printf("| 2) Trier et afficher les donnees par ordre croissant              |\n");
    printf("|-------------------------------------------------------------------|\n");
    printf("| 3) Trier et afficher les donnees par ordre decroissant            |\n");
    printf("|-------------------------------------------------------------------|\n");
    printf("| 4) Moyenne des pulsations durant un temps  donnee                 |\n");
    printf("|-------------------------------------------------------------------|\n");
    printf("| 5) Afficher le nombre de ligne de donnees actuellement en memoire |\n");
    printf("|-------------------------------------------------------------------|\n");
    printf("| 6) Afficher le minimum\maximum de pouls avec le temps associe      |\n");
    printf("|-------------------------------------------------------------------|\n");
    printf("| 0) Quitter la console                                             |\n");
    printf("|-------------------------------------------------------------------|\n\n");
    scanf("%d",&choix);


        switch(choix)
        {
            case 1:
                printf("\nVous avez choisi d'afficher les donnees dans l'ordre du temps\n");
                    afficherListe(liste);
                break;
            case 2 :
                printf("\nVous avez choisi le tri est l'affichage par ordre croissant\n");
                    TriCroissant(compteur, liste);
                printf("\n\n");
                break;

            case 3 :
                printf("\nVous avez choisi le tri est l'affichage par ordre decroissant\n");
                    TriDecroissant(compteur, liste);
                printf("\n\n");
                break;
            case 4 :
                printf("\nVous avez choisi l'affichage de la moyenne par unite de temps");
                    MoyennePulse(compteur, liste);
                printf("\n\n");
                break;

            case 5 :
                printf("\nVous avez choisi l'affichage du nombre de ligne de donnees actuellement en memoire");
                    Recherche(compteur, liste);
                printf("\n\n");
                break;

            case 6 :
                printf("\nVous avez choisi l'affichage minimum/maximum de poul par unite de temps\n");
                    MinMax(compteur, liste);
                printf("\n\n");
                break;
        }



    }while(choix!=0);

        printf("\n");
        printf("Vous voulez quitter la console, en etes vous sur ? \n \n");
        printf("Veuillez taper 1 pour confirmer\n");
        printf("Veuillez taper 2 pour retounez au menu\n");

        printf("\n");
        scanf("%d", &choix2);

        if(choix2 == 2){
            Menu_De_Base(choix);
            printf("\n");
        }

        exit(0);
        return EXIT_FAILURE;

}
