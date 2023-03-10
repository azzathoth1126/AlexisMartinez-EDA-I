#include<stdio.h>

void tablero_vacio(){

    int i, j, c1=0, c2=0; //fila y columna
    int tab_ajedrez[8][8];

    /*Rellena el arreglo bidimensional con 0*/
    for (i=0; i<8; tab_ajedrez[i++][j]){
        for (j=0; j<9; tab_ajedrez[i][j++])
            tab_ajedrez[i][j] = 0;
    }

    //Imprime las coordenadas de las filas 
    printf("Filas   ");
    for(i=0; i<8; i++)
        printf("%i ", (c1+=1));
    printf("  Columnas\n\n");

    //Imprime el tablero
    for (i=0; i<8; tab_ajedrez[i++][j]){
        printf("\t");
        for (j=0; j<8; tab_ajedrez[i][j++])
            printf("%i ", tab_ajedrez[i][j]);

        //Imprime las coordenadas de las columnas
        printf("  %i", (c2+=1));
        printf("\n");
    }
}

void queen(){

}

void king(){

}

int main(){

    int pieza;

    printf("\nPrograma que te da los posibles movimiento de una pieza de ajedrez.\n\n");
    tablero_vacio();
    printf("\nPiezas disponibles\n\n");
    printf("\t--->  Reina ....  1\n");
    printf("\t--->  Rey   ....  2\n\n");

    printf("De que pieza quieres saber sus posibles movimientos: ");
    scanf("%d", &pieza);

    switch(pieza){
        case 1:
        queen();
        break;

        case 2:
        king();
        break;

        default:
        printf("\n\tPor favor escoge un numero valido\n");
        printf("\n\tPrograma finalizado\n\n");
        break;
    }
   return 0;
}