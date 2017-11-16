#include <stdio.h>
#include <stdlib.h>
#include "actions.h"
#define TAILLE_MAX 10

void TriCroissant()
{
    Element *listelem = maListe->premier;

    afficherListe(maListe);
    Element *Suiv = listelem->suivant;

    int i;
    int temp;
    Bool tab_en_ordre = false;
    int taille = 10;

    while(!tab_en_ordre)
    {

        tab_en_ordre = true;
        for(i=0 ; i < taille ; i++)
        {

            if(listelem->poul > Suiv->poul)
            {
                temp = listelem->poul;
                listelem->poul = Suiv->poul;
                Suiv->poul = temp;
                tab_en_ordre = false;
            }
        }
        taille--;
    }

    afficherListe(&maListe);

}


void TriDecroissant(int d, int tmp, int i, int tab[20])
{

}

void MoyennePulse(int a)
{

}

int MinMax(int ListElement)
{

}


void recherche(ListElement)
{

}

