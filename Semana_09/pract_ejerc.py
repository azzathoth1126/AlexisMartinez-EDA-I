
def calculadora(num):
    a = int(input("Dama un numero:"))
    b = int(input("Dama otro numero:"))
    
    if num == 1:
        suma = a+b
        print("{} mas {} es igual a:{}".format(a, b, suma))
    elif num == 2:
        resta = a-b
        print("{} menos {} es igual a: {}".format(a, b, resta))
    elif num == 3:
        multi = a*b
        print("{} por {} es igual a: {}".format(a, b, multi))
    elif num == 4:
        if b == 0:
            b = int(input("Dame un numero distinto de cero: "))
        div = a/b
        print("{} entre {} es igual a: {}".format(a, b, div))
    else:
        print("Adios")
    


def menu_cal():
    print ('''
    \n---Calculadora---
    1- Sumar
    2- Restar
    3- Multiplicar
    4- Dividir
    5- Salir ''')

    opcion = int(input("\nQue quieres realizar: "))
    calculadora(opcion)


if __name__ == '__main__':

    nombre = input("Como te llamas: ")
    print("Buenos dias {}".format(nombre))

    menu_cal()