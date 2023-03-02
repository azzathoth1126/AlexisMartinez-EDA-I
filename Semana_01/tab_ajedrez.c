// Proyecto que pinta el tablero de ajedrez 
// 01.03.2023

#include<stdio.h>

int main(){

    int tab_ajedrez[7][7];
    int i,j;

    for (i=0; i<8; tab_ajedrez[i++][j]){
        printf("|");
        printf(" + ");
        //printf(" %i,%i ",tab_ajedrez[i][j], i);
        printf("|");

        for (j=0; j<7; tab_ajedrez[i][j++]){
            printf("|");
            printf(" + ");
            //printf(" %i,%i ",tab_ajedrez[i][j], j);
            printf("|");
        }
        printf("\n");
    }

    printf("\n");

    return 0;

}