#include <stdlib.h>
#include <stdio.h>
#include "circulo.h"

void main(){

    Circulo *c1, *c2;
    int conc;
    
    c1 = circ_cria(2.1,3.3,2.0);
    c2 = circ_cria(2.1,3.23,1.0);

    printf("area = %.2f  raio = %.2f\n", circ_area(c1), circ_raio(c1));
    
    conc=circ_concentricos(c1,c2); 
    if(conc==1){
        printf("eles sao concentricos\n");
    }else{
        printf("eles nao sao concentricos\n"); }
    }
