#include <stdio.h>
#include <stdlib.h>
#include "menu.h"


int Menu_De_Base(int choix)
{
    int i;
    int choix2;

    do
    {
    printf("Bienvenue dans la console lolilol la console ! \n\n");
    printf("Veuillez taper ce que vous voulez effectuer s'il vous plait ! \n\n");
    printf("1) Afficher les donnees dans l'ordre du temps\n");
    printf("------------------------------------------------------------------\n");
    printf("2) Trier et afficher les donnees par ordre croissant\n");
    printf("------------------------------------------------------------------\n");
    printf("3) Trier et afficher les donnees par ordre decroissant\n");
    printf("------------------------------------------------------------------\n");
    printf("4) Moyenne des pulsations durant un temps  donnee\n");
    printf("-----------------------------------------------------------------\n");
    printf("5) Afficher le nombre de ligne de donnees actuellement en memoire\n");
    printf("------------------------------------------------------------------\n");
    printf("6) Afficher le minimum de pouls avec le temps associe\n");
    printf("------------------------------------------------------------------\n");
    printf("7) Afficher le maximum de pouls avec le temps associe\n");
    printf("------------------------------------------------------------------\n");
    printf("0) Quitter la console \n");
    printf("------------------------------------------------------------------\n\n");
    scanf("%d",&choix);


        switch(choix)
        {
            case 1:
                printf("Vous avez choisi d'afficher les donnees dans l'ordre du temps\n");
                printf("%i", OuvertureFichier());

                break;

            case 2 :

                printf("Vous avez choisi le tri est l'affichage par ordre croissant\n");

                printf("\n\n");
                break;

            case 3 :
                printf("Vous avez choisi le tri est l'affichage par ordre decroissant\n");
                printf("\n\n");
                break;
            case 4 :
                printf("Vous avez choisi l'affichage de la moyenne par unite de temps");

                printf("\n\n");
                break;

            case 5 :
                printf("Vous avez choisi l'affichage du nombre de ligne de donnees actuellement en memoire");

                printf("\n\n");
                break;

            case 6 :
                printf("Vous avez choisi l'affichage minimum de poul par unite de temps\n");

                printf("\n\n");
                break;

            case 7 :
                printf("Vous avez choisi l'affichage maximum de poul par unite de temps\n");

                printf("\n\n");
                break;
        }



    }while(choix!=0);

        printf("Vous voulez quitter la console, en etes vous sur ? \n \n");
        printf("Veuillez taper 1 pour confirmer\n");
        printf("Veuillez taper 2 pour retounez au menu\n");



        scanf("%d", &choix2);
        if(choix2 == 1){
        exit(0);
        } else {
        Menu_De_Base(choix);
        printf("\n");
        }





    return 0;
}
