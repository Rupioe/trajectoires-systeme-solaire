#include "definition.h"

void ouverture(char* nom){
    FILE* fichier=fopen(nom,"wb+");
    fprintf(fichier,"{");
    fclose(fichier);

}

FILE *initialisationecriture(char* nom, char* planete){
    FILE* fichier=fopen(nom, "a+");
    fprintf(fichier,"\x22");
    fprintf(fichier,planete);
    fprintf(fichier,"\x22 : [\x0D");

    return fichier;
}

void ecriture(vector position, vector vitesse, int temps, FILE* fichier){
    char s[128];
    fprintf(fichier,"[[");

    sprintf(s, "%e", position.x);
    fprintf(fichier,s);
    fprintf(fichier,", ");

    sprintf(s, "%e", position.y);
    fprintf(fichier,s);
    fprintf(fichier,", ");

    sprintf(s, "%e", position.z);
    fprintf(fichier,s);
    fprintf(fichier,"],[");

    sprintf(s, "%e", vitesse.x);
    fprintf(fichier,s);
    fprintf(fichier,", ");

    sprintf(s, "%e", vitesse.y);
    fprintf(fichier,s);
    fprintf(fichier,", ");

    sprintf(s, "%e", vitesse.z);
    fprintf(fichier,s);
    fprintf(fichier,"], ");

    sprintf(s, "%d", temps);
    fprintf(fichier,s);
    fprintf(fichier,"],\x0D");

}


void finecriture(FILE* fichier, char* nom){
    fclose(fichier);
    FILE* fichierb= fopen(nom,"rb+");
    fseek(fichierb, -2L,SEEK_END);
    fprintf(fichierb,"],\x0D");
    fclose(fichierb);
}

void cloture(char* nom){
    FILE* fichier=fopen(nom,"rb+");
    fseek(fichier,-2L,SEEK_END);
    fprintf(fichier,"}");
    fclose(fichier);

}