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


int TriCroissant(int compteur, Liste *maListe);

int TriDecroissant(int compteur, Liste *maListe);

int MoyennePulse(int compteur, Liste *maListe);

int MinMax(int compteur, Liste *maListe);

int Recherche(int compteur, Liste *maListe);


