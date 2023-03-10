#include <stdio.h>

int main(){
    /*int *ap, indice;
    int nums[3][3] = {{99,88,77}, {66,55,44}, {33,22,11}};
    ap = nums;

    for(indice = 0; indice < 9; indice++){
        if((indice%3)==0){
            printf("\n");
        }
        printf("%x\t", (ap+indice));
    }

    printf("\n\n");*/

    int i, j;//fila y columna
    int tab_ajedrez[8][8];
    int *ap;
    ap = &tab_ajedrez;

    /*Rellena el arreglo bidimensional con 0*/
    for (i=0; i<8; i++){
        *(*ap) = 0;
        for (j=0; j<9; j++){
            *(*ap)=0
            *(*ap++);
        }
        *(*(ap++));
    }

    for(i=0; i<8; i++){
        printf("%d", tab_ajedrez[i][j]);
        for(j=0; j<8; j++){
           printf("%d", tab_ajedrez[i][j]); 
        }
    }

    return 0;
}