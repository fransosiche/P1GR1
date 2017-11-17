#include "entreeSortie.h"

// Lecture du fichier contenant les Dates à tester
// tableauDatesRetour (IN/OUT) - tableau de pointeurs vers de chaînes de caractères
void lireFichierDates(char **tableauDatesRetour)
{
    FILE *f = NULL; // représente un fichier en C
    char tab[TAILLE]; // Chaîne de caractères qui nous servira pour la lecture ligne par ligne du fichier (~buffer de lecture)
    int i = 0; // index du tableau

    f = fopen("./HeuresTests.txt", "r");// TODO : Ouverture du du fichier HeuresTests.txt

    if (!f)
    {
       printf("Le fichier automate.txt n'a pas pu être lu !");
	   fclose(f);
       exit(1);
    }// TODO :  Vérifier si le fichier a bien été ouvert. Sinon, envoyer une erreur et sortir du programme

    // TODO : Lecture de toute les lignes jusqu'à la fin de fichier
    while (fgets(tab, TAILLE, f) != NULL)
    {
        printf("%s",tab);// Attention aux caractères \n à la fin de la chaîne, il faut les supprimer
    }

    fclose(f);// TODO : Fermer le fichier
}

// Ecrit le mot dans le fichier avec le flag OK ou KO
// f (IN) - code de retour : 0 le mot est valide; 1 le mot est non valide (=erreur ou non reconnu par l'automate)
// cdr (IN) - code de retour : 0 le mot est valide, écrire OK; 1 le mot est non valide (=erreur ou non reconnu par l'automate), écrire KO
// mot (IN) - mot analysé
//
// La ligne dans le fichier doit être écrite une par ligne comme ça :
// date OK\n (pour une date valide)
// date KO\n  (pour une date NON valide)
void ecrireResultat(FILE *f,short cdr, char *mot)
{
     if(!cdr)
        fprintf(f, "%s OK\n", mot);
    else
        fprintf(f, "%s KO\n", mot);
}
    fclose(f);
   // TODO : Afficher le resultat dans la console

