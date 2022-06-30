#ifndef PROJET_C_YQ_TRAJECTOIRES_H
#define PROJET_C_YQ_TRAJECTOIRES_H
#include "definition.h"
#include "euler.h"
#include "liste.h"
#include "controle.h"


void euler(char* nomfichier, char* nomtrajectoire, double peri, double vit, double masse); //Calcule la trajectoire avec la formule d'euler et donne le temps de révolution et fait le test de l'énergie
void eulerasymetrique(char* nomfichier, char* nomtrajectoire, double peri, double vit, double masse); // Pareil avec euler asymétrique
#endif //PROJET_C_YQ_TRAJECTOIRES_H
