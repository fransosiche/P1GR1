#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"

int main()
{
    Liste *maListe = NULL;
    maListe = initialisation();
    int choix;
    Menu_De_Base(choix, maListe);
    return 0;
}
