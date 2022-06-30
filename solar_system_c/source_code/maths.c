#include "definition.h"
//fonctions de calculs, présentes dans l'ennonce
vector createVector() {
    double x,y,z;
    printf ("donner x,y,z : ");
    scanf ("%lf %lf %lf", &x, &y, &z);
    vector vec;
    vec.x = x;
    vec.y = y;
    vec.z = z;
    return vec;
}

vector sousvector (vector a, vector b){
    vector c;
    c.x = a.x - b.x;
    c.y = a.y - b.y;
    c.z = a.z - b.z;
    return c;
}

vector addvector (vector a, vector b){
    vector c;
    c.x = a.x + b.x;
    c.y = a.y + b.y;
    c.z = a.z + b.z;
    return c;
}

vector multvector (vector a, float scalaire){
    vector b;
    b.x = a.x * scalaire;
    b.y = a.y * scalaire;
    b.z = a.z * scalaire;
    return b;
}

void vectorTest (){
    float scalaire;
    printf ("donner le scalaire : ");
    scanf ("%f", &scalaire);
    vector a = createVector();
    vector b = createVector();
    vector c = addvector(a, b);
    printf ("addition 2 vecteurs : %lf %lf %lf \n", c.x, c.y, c.z);
    c = multvector(c, scalaire);
    printf ("vecteur final : %lf %lf %lf \n", c.x, c.y, c.z);
}

