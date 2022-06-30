
#include "definition.h"
#include "euler.h"
vector positionversacceleration(vector position){
    vector a;
    a.x=(-G*MS)*position.x/ pow(norme(position),3);
    a.y=(-G*MS)*position.y/ pow(norme(position),3);
    a.z=(-G*MS)*position.z/ pow(norme(position),3);

    return a;
}

vector accelerationversvitesseplusun(vector acceleration, vector vitesseactuelle){
   vector vplusun;
    vplusun.x=vitesseactuelle.x + acceleration.x * DELTAT;
    vplusun.y=vitesseactuelle.y + acceleration.y * DELTAT;
    vplusun.z=0;
    return vplusun;
}

vector vitesseverspositionplusun(vector vitesse, vector positionactuelle){
    vector pplusun;
    pplusun.x=positionactuelle.x + vitesse.x * DELTAT;
    pplusun.y=positionactuelle.y + vitesse.y * DELTAT;
    pplusun.z=0;

    return pplusun;
}


double norme(vector p){
    return sqrt((p.x)*(p.x)+(p.y)*(p.y));
}