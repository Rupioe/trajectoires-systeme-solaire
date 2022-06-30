#ifndef MAIN_C_LISTE_H
#define MAIN_C_LISTE_H

typedef struct sTrajectoire { //structure, avec un point, et un pointeur vers une meme structure
    point valeur;
    struct trajectoire * next;
}trajectoire, *List;

typedef struct sPlanete { //structure d'une planete, et les valeures initiales sont connues
    char nom[8]; //code dans les documents, mais pas utiliser
    float masse;
    trajectoire trajec;
    float perihelie;
}planete;

//---fonctions-liste-chainees---//  //inspiration FormationVidéo.youtube

typedef enum {
    faux, //0
    vrai  //1
}Booleen;

point initialiser();
Booleen ListeVide (List a);
List creerListe(void);
List AjoutFinListe (List a, point pt);
void afficherListe (List a);
List SupprDebutListe(List liste);

#endif //MAIN_C_LISTE_H