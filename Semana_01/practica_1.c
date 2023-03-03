#include<stdio.h>

void fn_tab_ajedrez(){

    int i=0, j=0;
    int tab[8][8];//variable tablero de ajedrez

    for (i=0; i<8; tab[i++][j]){
        tab[i][j] = 0 ;

        for (j=0; j<7; tab[i][j++]){
            tab[i][j] = 0;
        }
    }

    for (i=0; i<8; tab[i++][j]){
        printf("%i", tab[i][j]);

        for (j=0; j<7; tab[i][j++]){
            printf("%i", tab[i][j]);
        }
        printf("\n");
    }
}

int tab_torre(){

    int fila, colm, i=0, j=0; //fila y columna
    int tab_ajedrez[8][8];

    printf("\nEscogiste una Torre\n\n");
    fn_tab_ajedrez();
    printf("Recuerda que el tablero de ajedrez se divide en filas y columnas del 1 a la 8\n");

    printf("\nEn que fila de la 1 a la 8 quieres posicionar la torre?: ");
    scanf("%i", &fila);
    while(fila<1 || fila>8){
        printf("\nEscoge un valor valido: ");
        scanf("%d", &fila);
    }

    printf("\nEn que columna de la 1 a la 8 quieres posicionar la torre?: ");
    scanf("%i", &colm);
    while(colm<1 || colm>8){
        printf("Escoge un valor valido: ");
        scanf("%d", &colm);
    }
    
    printf("\n\n");

    return 0;
}

int tab_alfil(){
    printf("\nEscogiste un Alfil\n\n");
    return 0;
}

int main(){

    int pieza;

    printf("\nPrograma que te da los posibles movimiento de una pieza de ajedrez.\n\n");
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