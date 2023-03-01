#include<stdio.h>

int tab_torre(){

    return 0;
}

int tab_alfil(){

    return 0;
}

int main(){

    int tablero[8][8];
    int pieza, alfil = 1, torre = 2;

    printf("Escoja que pieza saber sus movimientos: \n");
    pirntf("Torre ... 1");
    printf("Alfil ... 2");
    scanf("%d", &pieza);

    while pieza == 1{
        tab_torre();
    }

    return 0;
}