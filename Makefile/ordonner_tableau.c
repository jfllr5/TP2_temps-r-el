#include <stdio.h>
#include <stdlib.h>
 
void ordonnerTableau(int tableau[], int tailleTableau);
 
int main()
{

    int tableau[6] = {91,29,34,4,5,6};
    ordonnerTableau(tableau, 6);
    printf("Les nombres sont dans l'ordre : \n");
    for (int i = 0 ; i < 6 ; i++)
    {
        printf("%d\n", tableau[i]);
    }
}
 
 
void ordonnerTableau(int tableau[], int tailleTableau)
{
    int i;
    int t[tailleTableau];
    for (i=0;i < tailleTableau;i++)
    {
        t[i]=tableau[i];
    }
        for (i=0;i < tailleTableau-1;i++)
        {
            if (t[i]>t[i+1])
            {
                tableau[i]=t[i+1];
                tableau[i+1]=t[i];
            }
        }
 
}