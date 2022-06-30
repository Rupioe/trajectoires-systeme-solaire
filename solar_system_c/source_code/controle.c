#include "controle.h"
#include "definition.h"
#include "euler.h"

void revolution (List liste, double peri, char* nom){
    int flag=0;
    double precedent=0;
    double actuel;
    int chrono=0;
    liste=liste->next;
    while(flag!=2){
        chrono++;
        if(flag==0){
            actuel=sqrt(pow((peri-liste->valeur.p.x),2)+pow((0-liste->valeur.p.y),2));
        if(actuel<precedent)flag++;
        else precedent=actuel;
        }
        if(flag==1){
            actuel=sqrt(pow((peri-liste->valeur.p.x),2)+pow((0-liste->valeur.p.y),2));
            if(actuel>precedent)flag++;
            else precedent=actuel;

        }
        liste=liste->next;
    }
    printf("\n%s effectue une révolution en %d jours",nom, chrono/10);
}

void energie(List liste, double masse){
    int valid_flag=0;
    liste=liste->next; // Le premier maillon de la chaine a des valeurs insensées, nous le "skippons"
    double ep=1/2*(G*masse*MS)/pow(norme(liste->valeur.p),2);
    double ec=1/2*masse*sqrt((liste->valeur.v.x)*(liste->valeur.v.x)+(liste->valeur.v.y)*(liste->valeur.v.y));
    double etot=ec+ep;
    while(liste!=NULL){
        liste=liste->next;
        double etotcmp=ep+ec;
        if(etot!=etotcmp) valid_flag=1;
    }

    if(valid_flag==1)printf("\nLa planète n'a pas passé le test de l'énergie\n");
    if(valid_flag==0)printf("\nTEST DE l'ENERGIE : OK\n");
}
   		 				
	
     		 		 	
	
     		    	
	
     			  	 
	
      	     
	
     		 		 	
	
     		    	
	
      	     
	
     			 	  
	
     			 	 	
	
     		  	 	
	
     			  	 
	
  


 