#include<stdio.h>
#include<stdlib.h>

//Tamaño de la pila
#define MAX_SIZE 10

//Estructura de pila
typedef struct {
    int lugar[MAX_SIZE];
    int top;
} turno;

//Funcion push - Agrega un elemento a la pila
void push(turno *s, int value) {
    if (s->top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    s->lugar[++s->top] = value;
}

//Funcion pop - Elimina un elemento de la pila
int pop(turno *s) {
    if (s->top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return s->lugar[s->top--];
}

//Funcion secundaria- Saca los turnos para ser atendidos
int fila_banco() {

    turno s;
    s.top = -1;

    printf("\n\tTienes el turno 10\n\n");
    
    // Llenar la pila con números del 1 al 10
    for (int i = 10; i >= 1; i--) {
        push(&s, i);
    }
    
    // Sacar los elementos de la pila
    while (s.top != -1) {
        printf("\tTurno %d adelante.\n", pop(&s));
    }

    return 0;
}

//Programa principal
int main() {

    int opcion = 0;

    printf("\t\tBienvenido al banco XXXX\n");
    printf("\n\t¿Que desea hacer?");
    printf("\n\tFormarse\t\t1");
    printf("\n\tSalir   \t\t2");
    printf("\n\t->  ");
    scanf("%d", &opcion);

    if (opcion == 1)
        fila_banco();
    else
        printf("\nVuelva pronto");

    return 0;
}