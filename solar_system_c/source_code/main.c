#include "definition.h"
#include "euler.h"
#include "trajectoires.h"

int main() {
    system("rm trajectoires.json"); //efface l'ancien fichier de trajectoires

    ouverture("trajectoires.json");

    //Terre
    euler("trajectoires.json","earth-euler",PERI_TER,VIT_TER,M_TER);
    eulerasymetrique("trajectoires.json", "earth-asym",PERI_TER,VIT_TER,M_TER);

    //Mercure
    euler("trajectoires.json","merc-euler",PERI_MERC,VIT_MERC,M_MERC);
    eulerasymetrique("trajectoires.json", "merc-asym",PERI_MERC,VIT_MERC,M_MERC);

    //Mars
    euler("trajectoires.json","mars-euler",PERI_MAR,VIT_MAR,M_MAR);
    eulerasymetrique("trajectoires.json", "mars-asym",PERI_MAR,VIT_MAR,M_MAR);

    //Venus
    euler("trajectoires.json","venus-euler",PERI_VEN,VIT_VEN,M_VEN);
    eulerasymetrique("trajectoires.json", "venus-asym",PERI_VEN,VIT_VEN,M_VEN);

   cloture("trajectoires.json");
    return 0;
}
