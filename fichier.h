

#ifndef __carte_H__
#define __carte_H__

#include <stdio.h>

//Question 1 - déclaration du type t_carte
// On crée d'abord enum t_color qui fait référence aux figures de la carte (trèfles, pique, carreau et trèfle

typedef enum{coeur, pique, carreau, trefle} t_color; //ici, lorsque l'on utilise enum on a coeur = 1, pique = 2 et ainsi de suite




//On crée un type de données, ici, t_carte pour avoir la valeur et la couleur de la carte

typedef struct
{
	int val_carte; //La valeur de la carte
	t_color color_carte; // couleur de la carte initié avec enum
} t_carte;

void aff_carte(t_carte* carte);

#endif

//compilation
//gcc carte.c -c -Wall
//gcc blckjack.c -c -Wall
// edition lien : gcc -Wall -o blckjack carte.o blckjack.o
//exécution : ./blckjack

