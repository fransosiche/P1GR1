#include <stdio.h>
#include <stdlib.h>

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


int OuvertureFichier(Element *listelem, Liste *maListe);

Liste *initialisation();

void insertion(Liste *liste, int nouveauPoul, int nouveauTime);

void afficherListe(Liste *liste);
