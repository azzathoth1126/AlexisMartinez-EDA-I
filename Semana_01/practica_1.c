#include<stdio.h>

int tab_torre(){

    return 0;
}

int tab_alfil(){

    return 0;
}

int main(){

    int pieza;

    printf("Escoja que pieza saber sus movimientos: \n");
    pirntf("Torre ... 1");
    printf("Alfil ... 2");
    scanf("%d", &pieza);

    while pieza == 1{
        tab_torre();
    }

    return 0;
}