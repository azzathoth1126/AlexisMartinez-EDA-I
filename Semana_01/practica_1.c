#include<stdio.h>

void fun_1_imp_tab(){

    int i, j, cont=0, cont2=0; //fila y columna
    int tab_ajedrez[8][8];

    //Rellena el arreglo bidimensional con 0
    for (i=0; i<8; tab_ajedrez[i++][j]){
        tab_ajedrez[i][j] = 0;
        for (j=0; j<9; tab_ajedrez[i][j++]){
            //printf("%i ", (cont2++));
            tab_ajedrez[i][j] = 0;
        }
    }

    //Imprime las coordenadas de las filas
    printf("Filas   "); 
    for(i=0; i<8; i++)
        printf("%i ", (cont+=1));
    printf("  Columnas\n\n");

    //Imprime el arreglo
    for (i=0; i<8; tab_ajedrez[i++][j]){
        printf("\t");
        printf("%i ", tab_ajedrez[i][j]);
        for (j=0; j<7; tab_ajedrez[i][j++]){
            printf("%i ", tab_ajedrez[i][j]);
        }
        printf("  %i", (cont2+=1)); //Coordenadas de las columnas
        printf("\n");
    }
}

int tab_torre(){

    int fila=0, colm=0, fila2=0, colm2=0, cont=0, cont2=0, i=0, j=0; //fila y columna
    int tab_ajedrez[8][8];

    printf("\n\tEscogiste una Torre\n\n");
    fun_1_imp_tab();
    printf("\nRecuerda que el tablero de ajedrez se divide en filas y columnas del 1 a la 8\n");

    //Pide las coordenadas para la pieza
    printf("\nEn que fila de la 1 a la 8 quieres posicionar la torre?: ");
    scanf("%i", &fila2);
    while(fila2<1 || fila2>8){
        printf("\nEscoge un valor valido: ");
        scanf("%d", &fila2);
    }

    //Pide las coordenadas para la pieza
    printf("En que columna de la 1 a la 8 quieres posicionar la torre?: ");
    scanf("%i", &colm2);
    while(colm2<1 || colm2>8){
        printf("\nEscoge un valor valido: ");
        scanf("%d", &colm2);
    }
    printf("\n");

    //Rellena el arreglo bidimensional con 0
    for (i=0; i<8; tab_ajedrez[i++][j]){
        tab_ajedrez[i][j] = 0;
        for (j=0; j<9; tab_ajedrez[i][j++]){
            tab_ajedrez[i][j] = 0;
        }
    }
    //Introduce la pieza a las coordenadas escogidas
    tab_ajedrez[i=colm2][j=fila2]=1;

    //Imprime las coordenadas de las filas
    printf("Filas   "); 
    for(i=0; i<8; i++)
        printf("%i ", (cont+=1));
    printf("  Columnas\n\n");

    //Imprime el arreglo
    for (i=0; i<8; tab_ajedrez[i++][j]){
        printf("\t");
        printf("%i ", tab_ajedrez[i][j]);
        for (j=0; j<7; tab_ajedrez[i][j++]){
            printf("%i ", tab_ajedrez[i][j]);
        }
        printf("  %i", (cont2+=1)); //Coordenadas de las columnas
        printf("\n");
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