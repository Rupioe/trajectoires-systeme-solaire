#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>

#ifndef PROJET_C_YQ_DEFINITION_H
#define PROJET_C_YQ_DEFINITION_H

//structures servant dans tout le programme
typedef struct sVector {
    double x;
    double y;
    double z;
}vector;

typedef struct sPoint {
    vector p;
    vector v;
    int temps;
}point;

//fonctions maths demandées dans le cahier des charges
vector sousvector (vector a, vector b);
vector addvector (vector a, vector b);
vector multvector (vector a, float scalaire);
void vectorTest ();

//fonctions ecriture
FILE* initialisationecriture(char* nom, char* planete); //ouvre le fichier avec le nom inséré dans la fonction
void ecriture(vector position, vector vitesse, int temps, FILE* fichier); //imprime la position actuelle, la vitesse et le temps
void finecriture(FILE *fichier, char* nom); //supprime la virgule de l'écriture d'avant et insere un ], pour fermer cette trajectoire
void ouverture(char* nom);// ajoute { au début du fichier
void cloture(char* nom);// enlève une virgule et ajout ]} à la fin du fichier

#endif //PROJET_C_YQ_DEFINITION_H