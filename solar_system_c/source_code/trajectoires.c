#include "trajectoires.h"

void eulerasymetrique(char* nomfichier, char* nomtrajectoire, double peri, double vit, double masse){

    FILE *fichierasy=initialisationecriture(nomfichier, nomtrajectoire);
    vector vitessetasy;
    vector positiontasy;
    positiontasy.x = peri;
    positiontasy.y = 0;
    positiontasy.z = 0;

    vitessetasy.x = 0;
    vitessetasy.y = vit;
    vitessetasy.z = 0;

    trajectoire *listeasy = creerListe();
    point pt_asy;
    pt_asy.p = positiontasy;
    pt_asy.v = vitessetasy;

    int tempsasy = 0;

    for (int i = 0; i < 36500 ; ++i) {

        pt_asy.p = positiontasy;
        pt_asy.v = vitessetasy;
        pt_asy.temps = tempsasy;

        vector positiontplusunasy = vitesseverspositionplusun(vitessetasy, positiontasy);
        vector accelerationtasy = positionversacceleration(positiontplusunasy); // et on recalcule à t+1
        //ici accelerationtasy est en fait accel a t + 1
        vector vitessetplusunasy = accelerationversvitesseplusun(accelerationtasy, vitessetasy);

        ecriture(positiontasy,vitessetasy,tempsasy,fichierasy);

        AjoutFinListe(listeasy, pt_asy);


        vitessetasy = vitessetplusunasy; //on avance d'un cran
        positiontasy = positiontplusunasy;
        tempsasy++;
    }

    revolution(listeasy,peri,nomtrajectoire);
    energie(listeasy, masse);
    finecriture(fichierasy,nomfichier);
    free(listeasy);
}



void euler(char* nomfichier, char* nomtrajectoire, double peri, double vit, double masse){
        FILE *fichier=initialisationecriture(nomfichier, nomtrajectoire);
        vector vitesset;
        vector positiont;
        positiont.x = peri;
        positiont.y = 0;
        positiont.z = 0;

        vitesset.x = 0;
        vitesset.y = vit;
        vitesset.z = 0;

        trajectoire *liste = creerListe();
        point pt;
        pt.p = positiont;
        pt.v = vitesset;

        int temps = 0;

        for (int i = 0; i < 36500 ; ++i) {

            pt.p = positiont;
            pt.v = vitesset;
            pt.temps = temps;

            vector accelerationt = positionversacceleration(positiont); // et on recalcule à t+1
            vector vitessetplusun = accelerationversvitesseplusun(accelerationt, vitesset);
            vector positiontplusun = vitesseverspositionplusun(vitesset, positiont);

            ecriture(positiont,vitesset,temps,fichier);

            AjoutFinListe(liste, pt);


            vitesset = vitessetplusun; //on avance d'un cran
            positiont = positiontplusun;
            temps++;
        }

        revolution(liste,peri,nomtrajectoire);
        energie(liste,masse);
        finecriture(fichier,nomfichier);
        free(liste);
}