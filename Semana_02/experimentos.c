#include <stdio.h>

int main() {
    
    int arreglo1[8][8];
    int *(*apt);
    apt = arreglo1;

    for(int a=0; a<8; *(*(apt+(a++)))){
        for(int b=0; b<8; *(*apt+(b++)))
            arreglo1[a][b] = 0;
    }

    for(int i=0; i<8; *(*(apt+(i++)))){
        for(int j=0; j<8; *(*apt+(j++)))
            printf("%d ", *apt);
        printf("\n");
    }

    return 0;
}