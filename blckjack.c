

#include <stdio.h>
#include <stdlib.h>
#include "fichier.h"


//Programme principal


int main()
{

//Question 2 :Test de la procedure aff_carte
   

t_carte coeur_A = {5, coeur};
t_carte pique_2 = {13, pique};
t_carte trefle_13= {1, trefle};
t_carte carreau_10 = {2, carreau};

aff_carte(&pique_2);
    printf("\n");
aff_carte(&coeur_A);
    printf("\n");
aff_carte(&carreau_10);
    printf("\n");
aff_carte(&trefle_13);
printf("\n"); 

return 0;
}