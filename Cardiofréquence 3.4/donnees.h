#ifndef DONNEES_H
#define DONNEES_H
#include <stdio.h>
#include <stdlib.h>

int compteur;

typedef struct Element Element;
struct Element
{
    int poul;
    int time;
    struct Element *suivant;
};


typedef struct Liste Liste;
struct Liste
{
    Element *premier;
};


Liste* OuvertureFichier();

Liste *initialisation();

void insertion(Liste *liste, int nouveauPoul, int nouveauTime);

void afficherListe(Liste *liste);
#endif // DONNES_H
