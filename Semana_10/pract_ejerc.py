def numeros_usar():
    a = int(input(a))


def calculadora(num):
    if num == 1:
        numeros()
        if num:
            print()
        
    elif num == 2:
        resta()
    elif num == 3:
        multiplicacion()
    elif num == 4:
        divicion()
    else:
        print("Adios")


def menu_cal():
    print ("\n---Calculadora---")
    print ("1- Sumar")
    print ("2- Restar")
    print ("3- Multiplicar")
    print ("4- Dividir")
    print ("5- Salir")

    opcion = int(input("\nQue quieres realizar: "))
    calculadora(opcion)
    

def usuario():
    nombre = input("Como te llamas: ")
    print("Buenos dias {}".format(nombre))


if __name__ == '__main__':
    usuario()
    menu_cal()