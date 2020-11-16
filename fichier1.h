

#ifndef __carte_H__
#define __carte_H__

#include <stdio.h>

//Question 1 

typedef enum{coeur, pique, carreau, trefle} t_color;




typedef struct
{
	int val_carte; 
	t_color color_carte; 
} t_carte;

void aff_carte(t_carte* carte);

//Question 4 

typedef t_carte t_jeu[52]; 


void aff_carte(t_carte* carte);

void remplir(t_jeu tab_carte); 


//Question 5 : affichagee de t_jeu

void aff_tab_carte(t_jeu tab_carte);

//Question 6 : mélanger

void melange(t_jeu tab_carte, int nbr_permutation);


#endif

//compilation
//gcc carte1.c -c -Wall
//gcc blckjack1.c -c -Wall
// edition lien : gcc -Wall -o blckjack1 carte1.o blckjack1.o
//exécution : ./blckjack

