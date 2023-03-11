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
        printf("  %i\n", (c2+=1));
    }
}

int mov_q(int fila, int columna){

    int arreglo1[8][8], a, b;
    int *(*apt);
    apt = arreglo1;

    //Rellena el arreglo con ceros
    for(int a=0; a<8; *(*(apt+(a++))+0)){
        for(int b=0; b<8; *(*apt+0)+(b++))
            arreglo1[a][b] = 0;
    }

    //Introduciendo la pieza en el tablero
    a = --fila; b = --columna;
    arreglo1[a][b] = 1;

    int x1 = a, x2 = a;
    int y1 = b, y2 = b;
    
    while (x1>=0) arreglo1[--x1][b] = 8;
    while (x2<8) arreglo1[++x2][b] = 8;
    while (y1>=1) arreglo1[a][--y1] = 8;
    while (y2<7) arreglo1[a][++y2] = 8;

    int x3 = a, x4 = a, x5 = a, x6 = a;
    int b3 = b, b4 = b, b5 = b, b6 = b;
    
    while (x3>=0) arreglo1[--x3][++b3] = 8;
    while (x4<8) arreglo1[++x4][--b4] = 8;
    while (b5>=1) arreglo1[--x5][--b5] = 8;
    while (b6<7) arreglo1[++x6][++b6] = 8;

    //Imprime el tablero con las jugadas disponibles
    printf("\n\t");
    for(int i=0; i<8; *(*(apt+(i++)))){
        for(int j=0; j<8; *(*apt+(j++)))
            printf("%d ", arreglo1[i][j]);//*apt
        printf("\n\t");
    }
    printf("\n");

    return 0;
}

int mov_k(int fila, int columna){

    int arreglo1[8][8], a, b;
    int *(*apt);
    apt = arreglo1;

    //Rellena el arreglo con ceros
    for(int a=0; a<8; *(*(apt+(a++))+0)){
        for(int b=0; b<8; *(*apt+0)+(b++))
            arreglo1[a][b] = 0;
    }

    //Introduciendo la pieza en el tablero
    a = --fila; b = --columna;
    arreglo1[a][b] = 1;

    int x1 = a, x2 = a;
    int y1 = b, y2 = b;
    
    if (x1>=0) arreglo1[--x1][b] = 8;
    if (x2<8) arreglo1[++x2][b] = 8;
    if (y1>=1) arreglo1[a][--y1] = 8;
    if (y2<7) arreglo1[a][++y2] = 8;

    int x3 = a, x4 = a, x5 = a, x6 = a;
    int b3 = b, b4 = b, b5 = b, b6 = b;
    
    if (x3>=0) arreglo1[--x3][++b3] = 8;
    if (x4<8) arreglo1[++x4][--b4] = 8;
    if (b5>=1) arreglo1[--x5][--b5] = 8;
    if (b6<7) arreglo1[++x6][++b6] = 8;

    //Imprime el tablero con las jugadas disponibles
    printf("\n\t");
    for(int i=0; i<8; *(*(apt+(i++)))){
        for(int j=0; j<8; *(*apt+(j++)))
            printf("%d ", arreglo1[i][j]);//*apt
        printf("\n\t");
    }
    printf("\n");

    return 0;    
} 

void c_queen(){

    int fila, columna;

    printf("\n\n\t\"Escogiste la reina\"\n\n");

    //Coordenadas de la columna
    printf("\nDime en que fila quieres colocar a la Reina: ");
    scanf("%d", &columna);
    while(columna<1 || columna>8){
        printf("Escoge un valor valido: ");
        scanf("%d", &columna); 
    }
    
    //Coordenadas de la fila
    printf("Dime en que columna quieres colocar a la Reina: ");
    scanf("%d", &fila);
    while(fila<1 || fila>8){
        printf("Escoge un valor valido: ");
        scanf("%d", &fila); 
    }

    mov_q(fila,columna);
}

void c_king(){

    int fila, columna;

    printf("\n\n\t\"Escogiste el rey\"\n\n");

    //Coordenadas de la columna
    printf("\nDime en que fila (1 a 8) quieres colocar al Rey: ");
    scanf("%d", &columna);
    while(columna<1 || columna>8){
        printf("Escoge un valor valido: ");
        scanf("%d", &columna); 
    }
    
    //Coordenadas de la fila
    printf("Dime en que columna (1 a 8) quieres colocar al Rey: ");
    scanf("%d", &fila);
    while(fila<1 || fila>8){
        printf("Escoge un valor valido: ");
        scanf("%d", &fila); 
    }

    mov_k(fila,columna);
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
        c_queen();
        break;

        case 2:
        c_king();
        break;

        default:
        printf("\n\tPor favor escoge un numero valido\n");
        printf("\n\tPrograma finalizado\n\n");
        break;
    }
   return 0;
}