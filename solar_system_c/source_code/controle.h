#ifndef PROJET_C_YQ_CONTROLE_H
#define PROJET_C_YQ_CONTROLE_H
#include "definition.h"
#include "liste.h"

//fonctions demandées par le cahier des charges, revolution calcul le nombre de jours que prend une planète pour faire un tour complet autour du soleil
//et fonction énergie qui calcule qu'en chaque point de la trajectoire, la loi de conservation de l'énergie s'applique bien
void revolution (List liste, double peri, char* nom);
void energie(List liste, double masse);

#endif //PROJET_C_YQ_CONTROLE_H
