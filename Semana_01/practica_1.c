#include<stdio.h>

int tab_torre(){
    printf("\nEscogiste una torre\n\n");
    return 0;
}

int tab_alfil(){
    printf("\nEscogiste un alfil\n\n");
    return 0;
}

int main(){

    int pieza;

    printf("\nPrograma que te da los posibles movimiento de una pieza de ajedres.\n\n");
    printf("    Torre ....  1\n");
    printf("    Alfil ....  2\n");
    printf("\nDe que pieza quieres saber sus posibles movimientos: ");

    scanf("%d", &pieza);

    switch(pieza){

        case 1:
        tab_torre();
        break;

        case 2:
        tab_alfil();
        break;

        default:
        printf("Por favor escoge un numero valido\n");
        printf("Programa finalizado\n\n");
        break;
    }

   return 0;
}