#include <stdio.h>

int main()
{
/* Déclarations */
int A[50]; /* tableau donné */
int VAL; /* valeur à rechercher */
int POS; /* position de la valeur */
int N; /* dimension */
int I; /* indice courant */

/* Saisie des données */
printf("Dimension du tableau (max.50) : ");
scanf("%d", &N );
for (I=0; I<N; I++)
{
printf("Elément %d : ", I);
scanf("%d", &A[I]);
}
printf("Elément à rechercher : ");
scanf("%d", &VAL );
/* Affichage du tableau */
printf("Tableau donné : \n");
for (I=0; I<N; I++)
printf("%d ", A[I]);
printf("\n");
/* Recherche de la position de la valeur */
POS = -1;
for (I=0 ; (I<N)&&(POS==-1) ; I++)
if (A[I]==VAL)
POS=I;
/* Edition du résultat */
if (POS==-1)
printf("La valeur recherchée ne se trouve pas "
"dans le tableau.\n");
else
printf("La valeur %d se trouve à la position %d. \n",
VAL, POS);
return 0;
} 