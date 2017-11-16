#include <stdio.h>
#include <stdlib.h>
#include "actions.h"
#include "donnees.h"

int TriCroissant(int compteur, Liste *maListe)
{
    int i;
    int temp;
    int j;
    int k;
    int MIN = 0, MAX = 0;
    int A[compteur -1];
    Element *listelem = maListe->premier;

    for (j=0; j<compteur; j++)
    {
     A[j] = listelem->poul;
     listelem = listelem->suivant;
    }

    Bool tab_en_ordre = false;
    int taille = compteur;
    while(!tab_en_ordre)
    {
        tab_en_ordre = true;
        for(i=0 ; i < taille-1 ; i++)
        {
            if(A[i] > A[i+1])
            {
                temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
                tab_en_ordre = false;
            }
        }
        taille--;
    }
    printf("\n");
    for (k=0; k<compteur; k++)
    {
        printf("%d\n", A[k]);
    }
}




int TriDecroissant(int compteur, Liste *maListe)
{
    int i;
    int temp;
    int j;
    int k;
    int MIN = 0, MAX = 0;
    int A[compteur -1];
    Element *listelem = maListe->premier;

    for (j=0; j<compteur; j++)
    {
     A[j] = listelem->poul;
     listelem = listelem->suivant;
    }


    Bool tab_en_ordre = false;
    int taille = compteur;
    while(!tab_en_ordre)
    {
        tab_en_ordre = true;
        for(i=0 ; i < taille-1 ; i++)
        {
            if(A[i] < A[i+1])
            {
                temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
                tab_en_ordre = false;
            }
        }
        taille--;
    }
    printf("\n");
    for (k=0; k<compteur; k++)
    {
        printf("%d\n", A[k]);
    }
}


int MoyennePulse(int compteur, Liste *maListe)
{
    int TEMPSDEBUT = 0, TEMPSFIN = 0;
    int I;
    int k;
    int lol;
    int A[compteur -1];
    int somme = 0;
    int diviseur = 0;
    float moyenne = 0;
    Element *listelem = maListe->premier;

    for (I=0; I<compteur; I++)
    {
     A[I] = listelem->poul;
     listelem = listelem->suivant;
    }

    printf("\n");

    for (lol=0; lol<compteur; lol++)
    {
        printf("%d : %d\n", lol+1, A[lol]);
    }

    printf("\nPlage de temps : \nDe ");
    scanf("%d", &TEMPSDEBUT);
    printf(" a ");

    scanf("%d", &TEMPSFIN);
    while(TEMPSFIN > compteur){
        printf("\nChoisir un nombre moins grand que le nombre de valeurs ! Inferieur a %d :\n", compteur);
        scanf("%d", &TEMPSFIN);
    }

    for (k=(TEMPSDEBUT); k<(TEMPSFIN+1); k++)
    {
        somme=somme + A[k-1];
        printf("SOMME : %d\n", somme);
    }

    diviseur = (TEMPSFIN-TEMPSDEBUT) + 1;
    moyenne = somme / diviseur;
    printf("\nMoyenne : %f\n", moyenne);
}

int MinMax(int compteur, Liste *maListe)
{
    int I;
    int MIN = 0, MAX = 0;
    int A[compteur -1];
    Element *listelem = maListe->premier;

    for (I=0; I<compteur; I++)
    {
     A[I] = listelem->poul;
     listelem = listelem->suivant;
    }

    printf("Tableau  :\n");
    for (I=0; I<compteur; I++){
        printf("%d ", A[I]);
        printf("\n");
    }

    MIN=0;
    MAX=0;
    for (I=0; I<compteur; I++)
     {
      if(A[I]>A[MAX]) MAX=I;
      if(A[I]<A[MIN]) MIN=I;
     }

        printf("Position du minimum : %d\n", MIN);
        printf("Position du maximum : %d\n", MAX);
        printf("Valeur   du minimum : %d\n", A[MIN]);
        printf("Valeur   du maximum : %d\n", A[MAX]);
 return 0;

}


int Recherche(int compteur, Liste *maListe)
{
    int i = 0;
    int A[compteur - 1];
    int j = 0;
    int nbrRecherche=0;
    int position=0;
    int etat = 0;

    Element *listelem = maListe->premier;

    for (i=0; i<compteur; i++)
    {
     A[i] = listelem->poul;
     listelem = listelem->suivant;
    }

    printf("\n\nVeuillez entrer le nombre recherche : ...\n\n");
    scanf("%d",&nbrRecherche);

    for(j=0; j<=compteur; j++)
    {
        if(A[j]==nbrRecherche)
        {
            etat = 1;
            position=j+1;   //Pour avoir le n° de la case où se trouve le nombre recherché
        }
    }

    if(etat == 1)
    {
        printf("Le nombre %d se trouve dans la case %d", nbrRecherche, position);
    }
    else
    {
        printf("Le nombre %d ne se trouve pas dans ce tableau", nbrRecherche);
    }
return 0;
}

