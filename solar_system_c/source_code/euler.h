#ifndef PROJET_C_YQ_EULER_H
#define PROJET_C_YQ_EULER_H

// Constantes physiques
#define G  (6.6742*pow(10,-11))
#define MS (1.989*pow(10,30))
#define DELTAT 8064

// Constantes de Mercure
#define PERI_MERC (0.470000 * pow(10, 11))
#define M_MERC (3.3011*pow(10, 23))
#define VIT_MERC (5.897569 * pow(10, 4))

// Constantes de la Terre
#define PERI_TER (0.147098074*pow(10,12))
#define M_TER (59.736*pow(10,23))
#define VIT_TER (2.97 * pow(10, 4))

// Constantes de Mars
#define PERI_MAR (0.206655000*pow(10,12))
#define M_MAR (6.4185*pow(10,23))
#define VIT_MAR (2.6503*pow(10,4))

// Constantes de Venus
#define PERI_VEN (0.107476000 * pow(10,12))
#define M_VEN (48.675 * pow(10,23))
#define VIT_VEN (3.52643*pow(10,4))

// Fonctions pour euler
vector positionversacceleration(vector position);
vector vitesseverspositionplusun(vector vitesse, vector positionactuelle);
vector accelerationversvitesseplusun(vector acceleration, vector vitesseactuelle);
double norme(vector p);

#endif //PROJET_C_YQ_EULER_H
