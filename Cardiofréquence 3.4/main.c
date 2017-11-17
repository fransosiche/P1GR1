#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "actions.h"
#include "entreeSortie.h"

// Fonction principale main
// argc - nombre d'arguments passés dans argv
// argv - tableau d'arguments passés lors du lancement du programme exécutable

// "Automate de lecture des heures\n"
// "Format disponible : hh:mm:ss -> hh de 00-23, mm et ss de 00-59\n"

int main(int argc, char *argv[])
{
    int i = 0; // compteur pour la boucle
    struct lTransitions *automate[NBETATS]; // Tableau de pointeurs vers listes des transitions d'état
    int etatInitial = 0, etatFinal; // variables que contiendront l'état initial et final de l'automate - lues dans le fichier
    short cdr; // code de retour
    char *tableHeuresTests[NBTEST]; // tableau de heures
    FILE *fout = NULL, *f = NULL; // fichier résultat des tests

    // TODO : Initialiser tous les éléments de la tableau 'automate' à NULL
    for(i = 0;i<NBETATS;i++){
        automate[i] = NULL;
    }

     // TODO : Initialiser tous les éléments de la tableau de test 'tableHeuresTests' à NULL
    for(i = 0;i<NBTEST;i++){
        tableHeuresTests[i] = NULL;
    }

    // TODO : Lecture du fichier "automate.txt" (utiliser les fonctions déjà définies)
    lireFichier(automate,&etatInitial,&etatFinal);

    // TODO : Lire fichier de données de test "HeuresTests.txt" (utiliser les fonctions déjà définies)
    lireFichierDates(tableHeuresTests);

    // Ouvrir le fichier de résultats en écriture
    fout = fopen("./ResultatsHeuresTests.txt", "w");

    // TODO : Vérifier si le fichier a bien été ouvert. Sinon, envoyer une erreur et sortir du programme
     if (!fout)
    {
       printf("Le fichier ResultatsHeuresTests.txt n'a pas pu être lu !");
	   fclose(fout);
       exit(1);
    }

    // TODO : Initialiser la lecture du tableau de heures de tests
    i = 0;
    while (tableHeuresTests[i])
    {
        // Analyser le mot par l'automate
        cdr = analyse(tableHeuresTests[i], automate, etatInitial, etatFinal); //cdr = code de retour
        // Afficher le résultat de l'analyse
        ecrireResultat(fout, cdr, tableHeuresTests[i]);
        i++;
    }

    // Libérer les transitions ( structures dynamiques de l'automate )
    libererTransitions(automate);
    // fermet le fichier de résultats
    fclose(fout);

    return 0;
}




