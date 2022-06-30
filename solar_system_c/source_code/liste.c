#include "definition.h"
#include "liste.h"

point initialiser(){
    point a;
    a.p.x = 0.0;
    a.p.y = 0.0;
    a.p.z = 0.0;

    a.v.x = 0.0;
    a.v.y = 0.0;
    a.v.z = 0.0;

    a.temps = 0;
}

//----------------------------------//

Booleen ListeVide (List liste) {
    if(liste == NULL)
        return vrai;

    return faux;
}

//----------------------------------//

List creerListe(void) { //creation d'une liste, avec une 1ere valeur a 0 et un pointeur NULL
    trajectoire *liste = malloc(sizeof(trajectoire/* *liste */));
    liste->valeur = initialiser();
    liste->next = NULL;
    return liste;
    //return NULL;
}

//----------------------------------//

List AjoutFinListe (List liste, point pt) { //ajouter une valeur a la fin de la liste, avec un pointeur NULL

    trajectoire *element;
    element = malloc(sizeof(*element));
    if (element == NULL) {
        printf("erreur alloc dynamique\n");
        exit(EXIT_FAILURE);
    }
    element->valeur = pt; ///assigniation de la futur valeur
    element->next = NULL; ///pointant vers NULL car derniere valeur de la liste

    if (ListeVide(liste)) { ///cas liste vide
        liste = element;
        return liste;
    }
    trajectoire *temp;
    temp = liste;
    while (temp->next != NULL) {
        temp = temp->next;///deplacement a la fin de la liste
    }
    temp->next = element; ///on remplace le NULL de fin par la nouvelle valeur
    return liste;
}

//----------------------------------//

void afficherListe (List a) { //fonction de test, pour verifier la liste en l'affichant
    if (ListeVide(a)) {
        printf ("Liste vide\n");
        return;
    }

    while (a != NULL) {
        printf("[[%e, %e, %e],[%e, %e, %e], %d], \n", a->valeur.p.x, a->valeur.p.y, a->valeur.p.z, a->valeur.v.x, a->valeur.v.y, a->valeur.v.z, a->valeur.temps);
        a = a->next;
    }
    printf("\n");
}

//----------------------------------//
List SupprDebutListe(List liste) { //supprimer la 1ere valeur de la liste

    /*if(ListeVide(liste)) {        //(l'initialisation a 0 de la creation de la liste)
        return liste;               //mais ne marche pas
    }*/

    trajectoire *element;
    element = malloc(sizeof(*element));

    element = liste->next;
    liste = NULL;

    return element;
}