#include<stdio.h>

int fun_imp_tab(){

    int i, j, cont=0, cont2=0; //fila y columna
    int tab_ajedrez[8][8];

    /*Rellena el arreglo bidimensional con 0*/
    for (i=0; i<8; tab_ajedrez[i++][j]){
        for (j=0; j<8; tab_ajedrez[i][j++]){
            //printf("%i ", (cont2++));
            tab_ajedrez[i][j] = 0;
        }
    }

    /*Imprime el arreglo*/
    printf("Filas   ");//Imprime las coordenadas de las filas 
    for(i=0; i<8; i++)
        printf("%i ", (cont+=1));
    printf("  Columnas\n\n");
    for (i=0; i<8; tab_ajedrez[i++][j]){
        printf("\t");
        for (j=0; j<8; tab_ajedrez[i][j++]){
            printf("%i ", tab_ajedrez[i][j]);
        }
        printf("  %i", (cont2+=1)); //Coordenadas de las columnas
        printf("\n");
    }
    return 0;
}

int tab_torre(){

    int fila=0, fila2=0, colm=0, colm2=0, cont=0, cont2=0, i=0, j=0; //fila y columna
    int tab_ajedrez[8][8];

    printf("\n\n\tEscogiste una Torre\n\n");

    //Llena el arreglo con 0
    for (i=0; i<8; tab_ajedrez[i++][j]){
        for (j=0; j<9; tab_ajedrez[i][j++]){
            tab_ajedrez[i][j] = 0;
        }
    }


    //Pide las coordenadas para la pieza
    printf("\nEn que fila de la 1 a la 8 quieres posicionar la torre: ");//filas
    scanf("%i", &fila2);
    while(fila2<1 || fila2>8){
        printf("\nEscoge un valor valido: ");
        scanf("%d", &fila2);
    }
    printf("En que columna de la 1 a la 8 quieres posicionar la torre: ");//columnas
    scanf("%i", &colm2);
    while(colm2<1 || colm2>8){
        printf("\nEscoge un valor valido: ");
        scanf("%d", &colm2);
    }

    printf("\n");

    //Introduce la pieza a las coordenadas escogidas
    i = --colm2; j = (fila2-=2);
    tab_ajedrez[i][j] = 1;
    int x = i, y = j;
    int a = x, b = y;
    

    //Movimientos posibles
    while (x>=1) tab_ajedrez[--x][y] = 3;
    while (x<8) tab_ajedrez[++x][y] = 3;
    while (b>=1) tab_ajedrez[a][--b] = 3;
    while (b<8) tab_ajedrez[a][++b] = 3;    


    /*Imprime el arreglo con la pieza en el tablero*/
    tab_ajedrez[i][j] = 1; cont=0; cont2=0;
    for (i=0; i<8; tab_ajedrez[i++][j]){
        for (j=0; j<7; tab_ajedrez[i][j++]){
            printf("%i ", tab_ajedrez[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    return 0;
}

int tab_alfil(){
    int fila=0, fila2=0, colm=0, colm2=0, cont=0, cont2=0, i=0, j=0; //fila y columna
    int tab_ajedrez[8][8];

    printf("\n\nEscogiste un Alfil\n\n");

    //Llena el arreglo con 0
    for (i=0; i<8; tab_ajedrez[i++][j]){
        for (j=0; j<9; tab_ajedrez[i][j++]){
            tab_ajedrez[i][j] = 0;
        }
    }


    //Pide las coordenadas para la pieza
    printf("\nEn que fila de la 1 a la 8 quieres posicionar el alfil: ");//filas
    scanf("%i", &fila2);
    while(fila2<1 || fila2>8){
        printf("\nEscoge un valor valido: ");
        scanf("%d", &fila2);
    }
    printf("En que columna de la 1 a la 8 quieres posicionar el alfil: ");//columnas
    scanf("%i", &colm2);
    while(colm2<1 || colm2>8){
        printf("\nEscoge un valor valido: ");
        scanf("%d", &colm2);
    }

    printf("\n");

    //Introduce la pieza a las coordenadas escogidas
    i = --colm2; j = (fila2-=2);
    tab_ajedrez[i][j] = 2;
    int x = i, y = j;
    int n = x, m = y;


    //Movimientos disponibles
    while (x>=1) tab_ajedrez[--x][--y] = 3;
    while (x<8) tab_ajedrez[++x][++y] = 3;
    while (n>=1) tab_ajedrez[++m][n--] = 3;
    while (n<8) tab_ajedrez[--m][++n] = 3;  


    /*Imprime el arreglo con la pieza en el tablero*/
    tab_ajedrez[i][j] = 1; cont=0; cont2=0;
    for (i=0; i<8; tab_ajedrez[i++][j]){
        for (j=0; j<7; tab_ajedrez[i][j++]){
            printf("%i ", tab_ajedrez[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    return 0;
}

int main(){

    int pieza;

    printf("\nPrograma que te da los posibles movimiento de una pieza de ajedrez.\n\n");
    fun_imp_tab();
    printf("\nPiezas disponibles\n\n");
    printf("    Torre ....  1\n");
    printf("    Alfil ....  2\n\n");

    printf("De que pieza quieres saber sus posibles movimientos: ");
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