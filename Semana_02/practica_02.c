#include<stdio.h>

int mov_q(int fila, int columna){

    int arreglo1[8][8], a, b, pz = 1;
    int *(*apt);
    apt = arreglo1;

    //Rellena el arreglo con ceros
    for(int a=0; a<8; *(*(apt+(a++))+0)){
        for(int b=0; b<8; *(*apt+0)+(b++))
            arreglo1[a][b] = 0;
    }

    //Introduciendo la pieza en el tablero
    b = --fila; a = --columna;
    arreglo1[b][a] = pz;
    int a1= b, b1=a;

    while()

    //Imprime el tablero con las jugadas disponibles
    printf("\n\t");
    for(int i=0; i<8; *(*(apt+(i++)))){
        for(int j=0; j<8; *(*apt+(j++)))
            printf("%d ", arreglo1[i][j]);//*apt
        printf("\n\t");
    }
    printf("\n");

    
}

int mov_k(int fila, int columna){

    int arreglo1[8][8], a, b, pz = 1;
    int *(*apt);
    apt = arreglo1;

    //Rellena el arreglo con ceros
    for(int a=0; a<8; *(*(apt+(a++))+0)){
        for(int b=0; b<8; *(*apt+0)+(b++))
            arreglo1[a][b] = 0;
    }

    //Introduciendo la pieza en el tablero
    b = --fila; a = --columna;
    arreglo1[b][a] = pz;

    //Imprime el tablero con las jugadas disponibles
    printf("\n\t");
    for(int i=0; i<8; *(*(apt+(i++)))){
        for(int j=0; j<8; *(*apt+(j++)))
            printf("%d ", arreglo1[i][j]);//*apt
        printf("\n\t");
    }
    printf("\n");

    
} 

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

void c_queen(){

    int fila, columna;

    printf("\n\n\t\"Escogiste la reina\"\n\n");

    //Coordenadas de la columna
    printf("\nDime en que columna (1 a 8) quieres colocar a la reina: ");
    scanf("%d", &columna);
    while(columna<1 || columna>8){
        printf("Escoge un valor valido: ");
        scanf("%d", &columna); 
    }
    
    //Coordenadas de la fila
    printf("Dime en que fila (1 a 8) quieres colocar a la reina: ");
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
    printf("\nDime en que columna (1 a 8) quieres colocar al Rey: ");
    scanf("%d", &columna);
    while(columna<1 || columna>8){
        printf("Escoge un valor valido: ");
        scanf("%d", &columna); 
    }
    
    //Coordenadas de la fila
    printf("Dime en que fila (1 a 8) quieres colocar al Rey: ");
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