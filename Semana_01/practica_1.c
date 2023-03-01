#include<stdio.h>

int tab_torre(){
    
    int tablero_ajedrez[8][8];
    int fila = 0;
    char columna = 0;

    printf("\nEscogiste una Torre\n\n");
    printf("Recuerda que el tablero de ajedrez de divide en columnas de la A a la H\n");
    printf("Recuerda que el tablero de ajedrez de divide en filas del numero 1 al 8\n");

    printf("\nEn que fila de la 1 a la 8 quieres posicionar la torre: ");
    scanf("%i", &fila);

    if (fila =! 1,2,3,4,5,6,7,8) {

        printf("\nEn que fila de la 1 a la 8 quieres posicionar la torre: ");
        scanf("%i", &fila);
        
    }  

    printf("\nEn que columna de la A a la H quieres posicionar la torre: ");
    scanf("%s", &columna);

    printf("\n\n");

    return 0;
}

int tab_alfil(){
    printf("\nEscogiste un Alfil\n\n");
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