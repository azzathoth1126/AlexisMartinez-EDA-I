#include<stdio.h>

struct { //Estructura que contiene las coordenadas para las piezas
    int tAjedrez[8][8]; //Tablero de ajedrez
    int cfi;            //Fila
    int ccol;           //Columna
    int a, b, cont;     //Variables para cambiar
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


void fTabVacio(){
    int i, j, c1=0, c2=0; //fila y columna
    int tAjedrez[8][8];

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
}//Arreglar para imprimir con apuntadores


void fTorre(){

    torre.cont=1;

    printf("\n\n\tEscogiste la pieza \"Torre\" \n\n");
    printf("Dime en que parte del tablero quieres colocar la pieza\n");
    printf("\n\tFila: "); scanf("%d", &torre.cfi);
    printf("\tColumna: "); scanf("%d", &torre.ccol);

    torre.a = torre.ccol; 
    torre.b = torre.cfi;
    torre.tAjedrez[--torre.a][--torre.b] = 1;
    for(int i=0; torre.a>=0; i++){
        torre.tAjedrez[--torre.a][torre.b] =3;
    }

    torre.a = torre.ccol-1; 
    torre.b = torre.cfi-1;
    for(int i=0; torre.a<8; i++){
        torre.tAjedrez[++torre.a][torre.b] =3;
    }

    torre.a = torre.ccol-1; 
    torre.b = torre.cfi-1;
    for(int i=0; torre.b>=1; i++){
        torre.tAjedrez[torre.a][--torre.b] =3;
    }
    
    torre.a = torre.ccol-1; 
    torre.b = torre.cfi-1;
    for(int i=0; torre.b<7; i++){
        torre.tAjedrez[torre.a][++torre.b] =3;
    }

    printf("\nFilas   ");
    for(int i=1; i<9; i++)
        printf("%i ", (i));
    printf("  Columnas\n");

    printf("\n");
    for(int x=0; x<8; x++){
        printf("\t");
        for(int y=0; y<8; y++ )printf("%d ", torre.tAjedrez[x][y]);
        printf("  %i\n", torre.cont++);
    }
    printf("\n");
}//Torre lista

void fCaballo(){

    int a,b;
    caballo.cont=1;

    printf("\n\n\tEscogiste la pieza \"Caballo\" \n\n");
    printf("Dime en que parte del tablero quieres colocar la pieza\n");
    printf("\n\tFila: "); scanf(" %d", &caballo.cfi);
    printf("\tColumna: "); scanf(" %d", &caballo.ccol);

    caballo.a = --caballo.ccol; 
    caballo.b = --caballo.cfi; b = caballo.b;
    for (a=caballo.a; a<=0; a=0) {caballo.tAjedrez[caballo.a-=2][caballo.b-=1]=3;}

    caballo.tAjedrez[caballo.a][caballo.b]=1;
    printf("\nFilas   ");
    for(int i=1; i<9; i++)
        printf("%i ", (i));
    printf("  Columnas\n");

    printf("\n");
    for(int x=0; x<8; x++){
        printf("\t");
        for(int y=0; y<8; y++ )printf("%d ", caballo.tAjedrez[x][y]);
        printf("  %i\n", caballo.cont++);
    }
    printf("\n");
}


void fAlfil(){

    alfil.cont=1;

    printf("\n\n\tEscogiste la pieza \"Alfil\" \n\n");
    printf("Dime en que parte del tablero quieres colocar la pieza\n");
    printf("\n\tFila: "); scanf("%d", &alfil.cfi);
    printf("\tColumna: "); scanf("%d", &alfil.ccol);

    alfil.a = alfil.ccol; 
    alfil.b = alfil.cfi;
    alfil.tAjedrez[--alfil.a][--alfil.b] = 1;
    for(int i=0; alfil.a>=0 && alfil.b>=1; i++){
        alfil.tAjedrez[--alfil.a][--alfil.b] =3;
    }

    alfil.a = alfil.ccol-1; 
    alfil.b = alfil.cfi-1;
    for(int i=0; alfil.a<8 && alfil.b<7; i++){
        alfil.tAjedrez[++alfil.a][++alfil.b] =3;
    }

    alfil.a = alfil.ccol-1; 
    alfil.b = alfil.cfi-1;
    for(int i=0; alfil.b>=1 && alfil.a<7; i++){
        alfil.tAjedrez[++alfil.a][--alfil.b] =3;
    }
    
    alfil.a = alfil.ccol-1; 
    alfil.b = alfil.cfi-1;
    for(int i=0; alfil.b<7 && alfil.a>=1; i++){
        alfil.tAjedrez[--alfil.a][++alfil.b] =3;
    }

    printf("\nFilas   ");
    for(int i=1; i<9; i++)
        printf("%i ", (i));
    printf("  Columnas\n");

    printf("\n");
    for(int x=0; x<8; x++){
        printf("\t");
        for(int y=0; y<8; y++ )printf("%d ", alfil.tAjedrez[x][y]);
        printf("  %i\n", alfil.cont++);
    }
    printf("\n");
}//Alfil listo


void fReina(){

    reina.cont=1;

    printf("\n\n\tEscogiste la pieza \"Reina\" \n\n");
    printf("Dime en que parte del tablero quieres colocar la pieza\n");
    printf("\n\tFila: "); scanf("%d", &reina.cfi);
    printf("\tColumna: "); scanf("%d", &reina.ccol);

    reina.a = reina.ccol;
    reina.b = reina.cfi;
    reina.tAjedrez[--reina.a][--reina.b] = 1;
    for(int i=0; reina.a>=0; i++) reina.tAjedrez[--reina.a][reina.b] =3;

    reina.a = reina.ccol;
    reina.b = reina.cfi;
    for(int i=0; reina.a>=0 && reina.b>=1; i++) reina.tAjedrez[--reina.a][--reina.b] =3;

    reina.a = reina.ccol-1;
    reina.b = reina.cfi-1;
    for(int i=0; reina.a<8; i++) reina.tAjedrez[++reina.a][reina.b] =3;

    reina.a = reina.ccol-1;
    reina.b = reina.cfi-1;
    for(int i=0; reina.a<8 && reina.b<7; i++) reina.tAjedrez[++reina.a][++reina.b] =3;

    reina.a = reina.ccol-1;
    reina.b = reina.cfi-1; 
    for(int i=0; reina.b>=1; i++) reina.tAjedrez[reina.a][--reina.b] =3;

    reina.a = reina.ccol-1;
    reina.b = reina.cfi-1; 
    for(int i=0; reina.b>=1 && reina.a<7; i++) reina.tAjedrez[++reina.a][--reina.b] =3;
    
    reina.a = reina.ccol-1;
    reina.b = reina.cfi-1; 
    for(int i=0; reina.b<7; i++) reina.tAjedrez[reina.a][++reina.b] =3;

    reina.a = reina.ccol-1;
    reina.b = reina.cfi-1; 
    for(int i=0; reina.b<7 && reina.a>=1; i++) reina.tAjedrez[--reina.a][++reina.b] =3;

    reina.tAjedrez[--reina.ccol][--reina.cfi] = 1;

    printf("\nFilas   ");
    for(int i=1; i<9; i++)
        printf("%i ", (i));
    printf("  Columnas\n");

    printf("\n");
    for(int x=0; x<8; x++){
        printf("\t");
        for(int y=0; y<8; y++ )printf("%d ", reina.tAjedrez[x][y]);
        printf("  %i\n", reina.cont++);
    }
    printf("\n");
}//Reina lista


void fRey(){

    printf("\n\n\tEscogiste la pieza \"Rey\" \n\n");
    printf("Dime en que parte del tablero quieres colocar la pieza\n");
    printf("\n\tFila: "); scanf("%d", &rey.cfi);
    printf("\tColumna: "); scanf("%d", &rey.ccol);

    rey.cont = 1;
    rey.a = rey.ccol;
    rey.b = rey.cfi;
    rey.tAjedrez[--rey.a][--rey.b] = 1;
    if(rey.a>=0){
        rey.tAjedrez[--rey.a][rey.b] =3;
        if (rey.b>=1){
            rey.tAjedrez[rey.a][--rey.b] =3;
        }
    }
    
    rey.a = rey.ccol-1;
    rey.b = rey.cfi-1;
    if(rey.a<8){
        rey.tAjedrez[++rey.a][rey.b] =3;
        if (rey.b<7){
            rey.tAjedrez[rey.a][++rey.b] =3;
        }
    }

    rey.a = rey.ccol-1;
    rey.b = rey.cfi-1;
    if(rey.b>=1){
        rey.tAjedrez[rey.a][--rey.b] =3;
        if(rey.a<7){
            rey.tAjedrez[++rey.a][rey.b] =3;
        }
    }

    rey.a = rey.ccol-1;
    rey.b = rey.cfi-1;
    if(rey.b<7){
        rey.tAjedrez[rey.a][++rey.b] =3;
        if(rey.a>=1){
            rey.tAjedrez[--rey.a][rey.b] =3;
        }
    }

    printf("\nFilas   ");
    for(int i=1; i<9; i++)
        printf("%i ", (i));
    printf("  Columnas\n");

    printf("\n");
    for(int x=0; x<8; x++){
        printf("\t");
        for(int y=0; y<8; y++ )printf("%d ", rey.tAjedrez[x][y]);
        printf("  %i\n", rey.cont++);
    }
    printf("\n");
}//Rey listo