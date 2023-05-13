def suma():
    print("\nDame dos valores para sumar")
    x = int(input("Valor 1: "))
    y = int(input("Valor 2:"))

    z = x + y

    print("\nEl valor de {} mas {} es: {}".format(x, y, z))


def resta():
    print("\nDame dos valores para restar")
    x = int(input("Valor 1: "))
    y = int(input("Valor 2:"))

    z = x - y

    print("\nEl valor de {} menos {} es: {}".format(x, y, z))


def multiplicacion():
    print("\nDame dos valores para multiplicarlos")
    x = int(input("Valor 1: "))
    y = int(input("Valor 2:"))

    z = x * y

    print("\nEl valor de {} por {} es: {}".format(x, y, z))


def divicion():
    print("\nDame dos valores para dividirlos")
    x = int(input("Valor 1: "))
    y = int(input("Valor 2:"))

    z = x / y

    print("\nEl valor de {} entre {} es: {}".format(x, y, z))


def calculadora(num):
    if num == 1:
        suma()
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