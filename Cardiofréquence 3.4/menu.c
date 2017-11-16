#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "donnees.h"

int Menu_De_Base()

{

    int choix;
    int choix2;
    int choix3 = 0;
    Liste* liste = OuvertureFichier();
    do
    {
    printf("\n\n                 Bienvenue dans la console ! \n\n");
    printf(" Veuillez taper ce que vous voulez effectuer s'il vous plait ! \n\n");
    printf("|-------------------------------------------------------------------|\n");
    printf("| 1) Afficher le poul dans l'ordre du temps                         |\n");
    printf("|-------------------------------------------------------------------|\n");
    printf("| 2) Trier et afficher les donnees par ordre croissant              |\n");
    printf("|-------------------------------------------------------------------|\n");
    printf("| 3) Trier et afficher les donnees par ordre decroissant            |\n");
    printf("|-------------------------------------------------------------------|\n");
    printf("| 4) Moyenne des pulsations durant un temps donne                   |\n");
    printf("|-------------------------------------------------------------------|\n");
    printf("| 5) Saisir une recherche de Poul durant un laps de temps           |\n");
    printf("|-------------------------------------------------------------------|\n");
    printf("| 6) Afficher le minimum et maximum de pouls avec le temps associe  |\n");
    printf("|-------------------------------------------------------------------|\n");
    printf("| 7) Afficher le nombre de ligne(s) de donnees stockee(s)           |\n");
    printf("|-------------------------------------------------------------------|\n");
    printf("| 0) Quitter la console                                             |\n");
    printf("|-------------------------------------------------------------------|\n\n");
    scanf("%d",&choix);


        switch(choix)
        {
            case 1:
                printf("\nVous avez choisi l'affichage du poul dans l'ordre du temps  \n");
                    afficherListe(liste);
                break;

            case 2 :
                choix3 = 0;
                printf("\nVous avez choisi le tri par ordre croissant\n");
                printf("Quel tri souhaitez vous effectuer ? \n");
                printf(" 1 | Tri par poul avec un laps de temps \n");
                printf(" 2 | Tri par poul sans un laps de temps \n");
                scanf("%d", &choix3);
                if(choix3 == 1)
                {
                    TriCroissantTemps(compteur, liste);
                 } if(choix3 == 2){
                    TriCroissant(compteur, liste);}
                else

                    printf ("Valeur erronee, veuillez reessayer \n");
                    return Menu_De_Base();


                printf("\n\n");
                break;

            case 3 :
                choix3 = 0;
                printf("\nVous avez choisi le tri par ordre decroissant\n");
                printf("Quel tri souhaitez vous effectuer ? \n");
                printf(" 1 | Tri par poul avec un laps de temps \n");
                printf(" 2 | Tri par poul sans laps de temps \n");
                scanf("%d", &choix3);

                if(choix3 == 1)
                {
                    TriDecroissantTemps(compteur, liste);
                } if(choix3 == 2) {
                    TriDecroissant(compteur, liste);
                }
                else
                    printf("Valeur erronee, veuillez reessayer \n");
                    return Menu_De_Base();
                printf("\n\n");
                break;

            case 4 :
                choix3 = 0;
                printf("\nVous avez choisi l'affichage de la moyenne");
                printf("Quel tri souhaitez vous effectuer ? \n");
                printf(" 1 | Moyenne par poul avec un laps de temps \n");
                printf(" 2 | Moyenne par poul sans laps de temps \n");
                scanf("%d", &choix3);

                if(choix3 == 1)
                {
                    MoyennePulseTemps(compteur, liste);
                }   if(choix3 == 2)
                    MoyennePulse(compteur, liste);
                else
                    printf("Valeur erronee, veuillez reessayer \n");
                    return Menu_De_Base();


                printf("\n\n");
                break;

            case 5 :
                choix3 = 0;
                printf("\nVous avez choisi l'affichage de la moyenne\n");
                printf("Quel tri souhaitez vous effectuer ? \n");
                printf(" 1 | Recherche de poul avec un laps de temps \n");
                printf(" 2 | Recherche de poul sans laps de temps \n");
                scanf("%d", &choix3);

                if(choix3 == 1)
                {
                    RechercheTemps(compteur, liste);
                }
                if(choix3 == 2)
                    Recherche(compteur, liste );

                else{
                    printf("Valeur erronee, veuillez reessayer \n");
                    return Menu_De_Base();
                }


                printf("\n\n");
                break;

            case 6 :
                printf("\nVous avez choisi l'affichage du minimum et du maximum de poul par unite de temps\n");
                printf("Quel minimum et maximum souhaitez vous effectuer ? \n");
                printf(" 1 | Recherche de min/max avec un laps de temps \n");
                printf(" 2 | Recherche de min/max sans laps de temps \n");
                scanf("%d", &choix3);

                if(choix3 == 1)
                {
                    MinMaxTemps(compteur, liste);
                }
                if(choix3 == 2)
                {
                    MinMax(compteur, liste);
                }

                else{
                    printf("Valeur erronee, veuillez reessayer \n");
                    return Menu_De_Base();
                }

                printf("\n\n");
                break;

            case 7 :
                printf("\nVous avez choisi l'affichage du nombre de ligne(s) stockée(s) \n");
                OuvertureFichier();
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
            Menu_De_Base();
            printf("\n");
        }
        else


            return EXIT_FAILURE;

}
