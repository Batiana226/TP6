

#include <stdio.h>
#include <stdlib.h>
#include "fichier.h"


//Programme principal


int main()
{

//Question 2 
   

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



   
t_jeu tab_carte;
remplir(tab_carte);


aff_tab_carte(tab_carte);
printf("\n");



srand(time(NULL));  

melange(tab_carte, 1001);
aff_tab_carte(tab_carte);
  printf("\n");

return 0;
}
