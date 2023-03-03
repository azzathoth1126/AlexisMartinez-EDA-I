#include<stdio.h>

void fn_tab_ajedrez(){

    int cont=0,cont2=0, i, j, tab_a[8][8];//variable tablero de ajedrez

    //Imprime las coordenadas de las filas
    printf("Filas   "); 
    for(i=0; i<8; i++)
        printf("%i ", (cont+=1));
    printf("  Columnas\n\n");

    //Rellena el arreglo bidimensional con 0
    for (i=0; i<8; tab_a[i++][j]){
        tab_a[i][j] = 0;
        for (j=0; j<9; tab_a[i][j++]){
            //printf("%i ", (cont2++));
            tab_a[i][j] = 0;
        }
    }

    //Imprime el arreglo
    for (i=0; i<8; tab_a[i++][j]){
        printf("\t");
        printf("%i ", tab_a[i][j]);
        for (j=0; j<7; tab_a[i][j++]){
            printf("%i ", tab_a[i][j]);
        }
        printf("  %i", (cont2+=1)); //Coordenadas de las columnas
        printf("\n");
    }
}

int fn_tab_ajedrez_cor(k,l){
    int i,j,k,l;
    int tab_a[8][8];//variable tablero de ajedrez

    //Imprime las coordenadas de las filas
    printf("Filas   "); 
    for(i=0; i<8; i++)
        printf("%i ", (cont+=1));
    printf("  Columnas\n\n");

    //Rellena el arreglo bidimensional con 0
    for (i=0; i<8; tab_a[i++][j]){
        if (i = k)
            tab_a[i][j] = 1;
        tab_a[i][j] = 0;
        for (j=0; j<9; tab_a[i][j++]){
            if (j = l)
                tab_a[i][j] = 1;
            tab_a[i][j] = 0;
        }
    }

    //Imprime el arreglo
    for (i=0; i<8; tab_a[i++][j]){
        printf("\t");
        printf("%i ", tab_a[i][j]);
        for (j=0; j<7; tab_a[i][j++]){
            printf("%i ", tab_a[i][j]);
        }
        printf("  %i", (cont2+=1)); //Coordenadas de las columnas
        printf("\n");
    }

}

int tab_torre(){

    int fila, colm, i, j; //fila y columna
    int tab_ajedrez[8][8];

    printf("\nEscogiste una Torre\n\n");
    fn_tab_ajedrez();
    printf("\nRecuerda que el tablero de ajedrez se divide en filas y columnas del 1 a la 8\n");

    //Pide las coordenadas para la pieza
    printf("\nEn que fila de la 1 a la 8 quieres posicionar la torre?: ");
    scanf("%i", &fila);
    while(fila<1 || fila>8){
        printf("\nEscoge un valor valido: ");
        scanf("%d", &fila);
    }

    //Pide las coordenadas para la pieza
    printf("\nEn que columna de la 1 a la 8 quieres posicionar la torre?: ");
    scanf("%i", &colm);
    while(colm<1 || colm>8){
        printf("Escoge un valor valido: ");
        scanf("%d", &colm);
    }

    fn_tab_ajedrez_cor(fila,colm);
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