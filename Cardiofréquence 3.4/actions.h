#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "donnees.h"

	/* Définition d'un Booléen */
typedef enum
	{
		false,
		true
	}Bool;


void TriCroissant (Liste *maListe);

void TriDecroissant(int d, int tmp, int i, int tab[20]);

void MoyennePulse(int tempschoisi);

void Maximum(int liste, int ListElement);

void Minimum(int liste, int ListElement);

void recherche();


