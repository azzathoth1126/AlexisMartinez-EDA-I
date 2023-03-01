#include<stdio.h>

int tab_torre(){
    printf("Escogiste una torre");
    return 0;
}

int tab_alfil(){
    printf("Escogiste un alfil");
    return 0;
}

int main(){

    int pieza;

    printf("Programa que te da los posibles movimiento de una pieza de ajedres.\n");
    printf("    Torre ....  1\n");
    printf("    Alfil ....  2\n");
    printf("Escoja de que pieza saber sus movimientos: ");

    scanf("%d", &pieza);

    printf("%d\n", pieza);

    if (pieza == 1){
        tab_torre();
    else 
        tab_alfil();
    }
   return 0;
}