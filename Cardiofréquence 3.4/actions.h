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

int TriDecroissantTemps(int compteur, Liste *maListe);

int TricroissantTemps(int compteur, Liste *maListe);

int TriDecroissant(int compteur, Liste *maListe);

int MoyennePulseTemps(int compteur, Liste *maListe);

int MoyennePulse(int compteur, Liste *maListe);

int MinMax(int compteur, Liste *maListe);

int MinMaxTemps(int compteur, Liste *maListe);

int Recherche(int compteur, Liste *maListe);

int RechercheTemps(int compteur, Liste *maListe);


