#include <stdio.h>
#include <stdlib.h>
#include "fichier.h"


//Q2-recupération et affichage de carte
//procédure de récupération de carte

void aff_carte(t_carte* carte)
{
	//affichage de la carte 
	switch(carte->val_carte)
	 {
	 	case 1 :
	 	printf(" A");
	 	break;

	 	case 11 :
	 	printf(" V");
	 	break;

	 	case 12 :
	 	printf(" D");
	 	break;

	 	case 13 :
	 	printf(" R");
	 	break;

	 	default :
	 	 printf("%2d",carte->val_carte);
	 	 break;


	 }


	 // couleur 

	 switch(carte->color_carte)
	 {
	 	case coeur:
	 	printf("\xE2\x99\xA1 ");
	 	break;

	 	case pique:
	 	printf("\xE2\x99\xA0 ");
	 	break;

	 	case carreau:
	 	printf("\xE2\x99\xA2 ");
	 	break;

	 	case trefle:
	 	printf("\xE2\x99\xA3 ");
	 	break;

	 	default :
	 	 printf(" ");
	 	 break;


	 }


}
