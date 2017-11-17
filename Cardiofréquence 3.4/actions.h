#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Constante - Taille du tableau de caract�res pour la lecture des mots
#define TAILLETAB 100
// Constante - Nombre maximum d'�tats de l'automate
#define NBETATS 100
// Constante - Nombre maximum de tests
#define NBTEST 100

// Structure de donn�es qui represente une transition avec un caract�re et un etatSuivant.
// La structure sera ger�e avec une liste chain�e avec "next"
typedef struct lTransitions {
    char c;
    int etatSuivant;
    struct lTransitions *next;
}lTransitions;

// Lecture du fichier et renseignement du table de transitions de l'automate
// automate (OUT)- table de transitions de l'automate
// etatInitial (OUT)- etat initial de l'automate
// etatFinal (OUT)- etat final de l'automate (on consid�re qu'il y a un seul �tat pour cet exercice)
void lireFichier(struct lTransitions **automate, int *etatInitial, int *etatFinal);

// Analyse du mot pat l'automate
// mot (IN) - mot � analyser
// automate (IN)- table de transitions de l'automate
// etatInitial (IN)- etat initial de l'automate
// etatFinal (IN)- etat final de l'automate (on consid�re qu'il y a un seul �tat pour cet exercice)
// Code de retour de la fonction - 0 = mot valide; 1 = mot non valide=erreur
short analyse(char *mot, struct lTransitions **automate, int etatInitial, int etatFinal);

// Lib�re les transitions allou�es pour la table de l'automate
// automate (IN/OUT)- table de transitions de l'automate
void libererTransitions(struct lTransitions **automate);
