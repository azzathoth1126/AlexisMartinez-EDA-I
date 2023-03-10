#include<stdio.h>

voitd main(){

    int i, j, cont=0, cont2=0; //fila y columna
    int tab_ajedrez[8][8];
    int *pta;
    pta = tab_ajedrez;

    for(i=0; i<8; i++){
        pta[&i][&j] = 0;
    }

    for(i=0; i<8; i++){
        printf("%d", *pta[i][j]);
    }
}