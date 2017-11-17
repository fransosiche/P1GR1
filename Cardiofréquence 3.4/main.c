#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "actions.h"
#include "entreeSortie.h"

// Fonction principale main
// argc - nombre d'arguments pass�s dans argv
// argv - tableau d'arguments pass�s lors du lancement du programme ex�cutable

// "Automate de lecture des heures\n"
// "Format disponible : hh:mm:ss -> hh de 00-23, mm et ss de 00-59\n"

int main(int argc, char *argv[])
{
    int i = 0; // compteur pour la boucle
    struct lTransitions *automate[NBETATS]; // Tableau de pointeurs vers listes des transitions d'�tat
    int etatInitial = 0, etatFinal; // variables que contiendront l'�tat initial et final de l'automate - lues dans le fichier
    short cdr; // code de retour
    char *tableHeuresTests[NBTEST]; // tableau de heures
    FILE *fout = NULL, *f = NULL; // fichier r�sultat des tests

    // TODO : Initialiser tous les �l�ments de la tableau 'automate' � NULL
    for(i = 0;i<NBETATS;i++){
        automate[i] = NULL;
    }

     // TODO : Initialiser tous les �l�ments de la tableau de test 'tableHeuresTests' � NULL
    for(i = 0;i<NBTEST;i++){
        tableHeuresTests[i] = NULL;
    }

    // TODO : Lecture du fichier "automate.txt" (utiliser les fonctions d�j� d�finies)
    lireFichier(automate,&etatInitial,&etatFinal);

    // TODO : Lire fichier de donn�es de test "HeuresTests.txt" (utiliser les fonctions d�j� d�finies)
    lireFichierDates(tableHeuresTests);

    // Ouvrir le fichier de r�sultats en �criture
    fout = fopen("./ResultatsHeuresTests.txt", "w");

    // TODO : V�rifier si le fichier a bien �t� ouvert. Sinon, envoyer une erreur et sortir du programme
     if (!fout)
    {
       printf("Le fichier ResultatsHeuresTests.txt n'a pas pu �tre lu !");
	   fclose(fout);
       exit(1);
    }

    // TODO : Initialiser la lecture du tableau de heures de tests
    i = 0;
    while (tableHeuresTests[i])
    {
        // Analyser le mot par l'automate
        cdr = analyse(tableHeuresTests[i], automate, etatInitial, etatFinal); //cdr = code de retour
        // Afficher le r�sultat de l'analyse
        ecrireResultat(fout, cdr, tableHeuresTests[i]);
        i++;
    }

    // Lib�rer les transitions ( structures dynamiques de l'automate )
    libererTransitions(automate);
    // fermet le fichier de r�sultats
    fclose(fout);

    return 0;
}




