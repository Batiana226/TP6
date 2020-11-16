#include <stdio.h>
#include <stdlib.h>
#include "fichier.h"


//Question 2

void aff_carte(t_carte* carte)
{
	// carte 
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

void remplir(t_jeu tab_carte)
{
    int i;

	
	for (i = 0; i < 13; i++) 
	{
		tab_carte[i].val_carte = (i+1); 
		tab_carte[i].color_carte = coeur; 
	}  

	
	for (i = 0; i < 13; i++)
	{
	     tab_carte[13 + i].val_carte = (i+1);
	     tab_carte[13 + i].color_carte = pique;
	}


	for (i = 0; i < 13; i++)
	{
		tab_carte[26 + i].val_carte = (i+1);
		tab_carte[26 + i].color_carte = carreau;
	}

	
	for (i = 0; i < 13; i++)
	{
		tab_carte[39 + i].val_carte = (i+1);
		tab_carte[39 + i].color_carte = trefle;
	}

}


//Question 5 

void aff_tab_carte(t_jeu tab_carte)
{
	int i;
	
   
	for (i = 0; i < 52; i++)
		{
		   aff_carte(&tab_carte[i]);
		}
}


//Question 6 



void melange(t_jeu tab_carte, int nbr_permutation)
{

	int nbr1, nbr2;
	int i;


	for (i = 0; i < nbr_permutation; i++)
	{
	       
		

		nbr1 = (int) ((rand()*51.0)/RAND_MAX);
		nbr2 = (int) ((rand()*51.0)/RAND_MAX);

		
		t_carte temp; 

		temp = tab_carte[nbr1];

		
		tab_carte[nbr1] = tab_carte[nbr2];

		
		tab_carte[nbr2] = temp;
	}
   
}
