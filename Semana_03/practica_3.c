#include<stdio.h>

struct { //Estructura que contiene las coordenadas para las piezas
    int tAjedrez[8][8]; //Tablero de ajedrez
    int cfi;   //Fila
    int ccol;  //Columna
    int a, b;  //Variables para cambiar
}torre, caballo, alfil, rey, reina;

//Declaracion de estructuras
void fTabVacio();
void fTorre();
void fAlfil();
void fCaballo();
void fReina();
void fRey();


int main(){ //Programa principal

    int pieza;

    printf("\nPosibles movimiento de una pieza de ajedrez.\n\n");
    fTabVacio();
    printf("\nPiezas disponibles\n\n");
    printf("    Torre   ....  1\n");
    printf("    Caballo ....  2\n");
    printf("    Alfil   ....  3\n");
    printf("    Reina   ....  4\n");
    printf("    Rey     ....  5\n");
    printf("    Salir   ....  \n\n");

    printf("De que pieza quieres saber sus posibles movimientos: ");
    scanf("%d", &pieza);

    switch(pieza){
        case 1:
        fTorre();
        break;

        case 2:
        fCaballo();
        break;

        case 3:
        fAlfil();
        break;

        case 4:
        fReina();
        break;

        case 5:
        fRey();
        break;

        default:
        printf("Escogiste salir.\n");
        printf("Programa finalizado\n\n");
        break;
    }
    return 0;
}


//Arreglar para imprimir con apuntadores
void fTabVacio(){
    int i, j, c1=0, c2=0; //fila y columna
    int tAjedrez[8][8];
    int *(*ap);
    ap = &tAjedrez;

    /*Rellena el arreglo bidimensional con 0*/
    for (i=0; i<8; tAjedrez[i++][j]){
        for (j=0; j<9; tAjedrez[i][j++])
            tAjedrez[i][j] = 0;
    }

    //Imprime las coordenadas de las filas 
    printf("Filas   ");
    for(i=0; i<8; i++)
        printf("%i ", (c1+=1));
    printf("  Columnas\n\n");

    //Imprime el tablero
    for (i=0; i<8; tAjedrez[i++][j]){
        printf("\t");
        for (j=0; j<8; tAjedrez[i][j++])
            printf("%i ", tAjedrez[i][j]);

        //Imprime las coordenadas de las columnas
        printf("  %i\n", (c2+=1));
    }
}


void fTorre(){

    printf("\n\tEscogiste la pieza \"Torre\" \n\n");
    printf("Dime en que parte del tablero quieres colocar la pieza\n");
    printf("\n\tFila: "); scanf("%d", &torre.cfi);
    printf("\tColumna: "); scanf("%d", &torre.ccol);

    torre.a = torre.cfi; 
    torre.b = torre.ccol;
    //printf("torre.cfi=%d torre.ccol=%d\n", torre.cfi, torre.ccol);
    //printf("torre.a=%d torre.b=%d\n", torre.a, torre.b);

    torre.tAjedrez[--torre.b][--torre.a] = 1;
 
    for(int i=0; torre.b>=0; i++) torre.tAjedrez[--torre.a][torre.b] =3;
    torre.b = torre.cfi; 
    //for(int i=0; torre.b<8; i++) torre.tAjedrez[++torre.a][torre.b] =3;

    //for(int i=0; torre.b>0; i++) torre.tAjedrez[torre.a][++torre.b] =3;
    torre.b = torre.ccol;
    //for(int i=0; torre.b<7; i++) torre.tAjedrez[torre.a][--torre.b] =3;

    printf("\n");
    
    for(int x=0; x<8; x++){
        for(int y=0; y<8; y++) printf("%d ", torre.tAjedrez[x][y]);
        printf("\n");
    }

    printf("\n");
}


void fAlfil(){

    printf("\n\tEscogiste la pieza \"Alfil\" \n\n");
    printf("Dime en que parte del tablero quieres colocar la pieza\n");
    printf("\n\tFila: "); scanf("%d", &alfil.cfi);
    printf("\tColumna: "); scanf("%d", &alfil.ccol);
}


void fCaballo(){

    printf("\n\tEscogiste la pieza \"Caballo\" \n\n");
    printf("Dime en que parte del tablero quieres colocar la pieza\n");
    printf("\n\tFila: "); scanf("%d", &caballo.cfi);
    printf("\tColumna: "); scanf("%d", &caballo.ccol);
}


void fReina(){

    printf("\n\tEscogiste la pieza \"Reina\" \n\n");
    printf("Dime en que parte del tablero quieres colocar la pieza\n");
    printf("\n\tFila: "); scanf("%d", &reina.cfi);
    printf("\tColumna: "); scanf("%d", &reina.ccol);
}


void fRey(){

    printf("\n\tEscogiste la pieza \"Rey\" \n\n");
    printf("Dime en que parte del tablero quieres colocar la pieza\n");
    printf("\n\tFila: "); scanf("%d", &rey.cfi);
    printf("\tColumna: "); scanf("%d", &rey.ccol);
}