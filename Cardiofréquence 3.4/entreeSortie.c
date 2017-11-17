#include "entreeSortie.h"

// Lecture du fichier contenant les Dates � tester
// tableauDatesRetour (IN/OUT) - tableau de pointeurs vers de cha�nes de caract�res
void lireFichierDates(char **tableauDatesRetour)
{
    FILE *f = NULL; // repr�sente un fichier en C
    char tab[TAILLE]; // Cha�ne de caract�res qui nous servira pour la lecture ligne par ligne du fichier (~buffer de lecture)
    int i = 0; // index du tableau

    f = fopen("./HeuresTests.txt", "r");// TODO : Ouverture du du fichier HeuresTests.txt

    if (!f)
    {
       printf("Le fichier automate.txt n'a pas pu �tre lu !");
	   fclose(f);
       exit(1);
    }// TODO :  V�rifier si le fichier a bien �t� ouvert. Sinon, envoyer une erreur et sortir du programme

    // TODO : Lecture de toute les lignes jusqu'� la fin de fichier
    while (fgets(tab, TAILLE, f) != NULL)
    {
        printf("%s",tab);// Attention aux caract�res \n � la fin de la cha�ne, il faut les supprimer
    }

    fclose(f);// TODO : Fermer le fichier
}

// Ecrit le mot dans le fichier avec le flag OK ou KO
// f (IN) - code de retour : 0 le mot est valide; 1 le mot est non valide (=erreur ou non reconnu par l'automate)
// cdr (IN) - code de retour : 0 le mot est valide, �crire OK; 1 le mot est non valide (=erreur ou non reconnu par l'automate), �crire KO
// mot (IN) - mot analys�
//
// La ligne dans le fichier doit �tre �crite une par ligne comme �a :
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

