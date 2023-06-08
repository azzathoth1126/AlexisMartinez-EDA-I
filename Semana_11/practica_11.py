def recursividad_binario(numero):
    if numero > 1:
        recursividad_binario(numero // 2)  # Llamada recursiva dividiendo el número entre 2
    print(numero % 2, end='')  # Imprimir el residuo de la división por 2


def recursividad_fibo(n):
    if n <= 1:
        return n
    else:
        return recursividad_fibo(n - 1) + recursividad_fibo(n - 2)


if __name__ == '__main__':
    opcion = 1

    while opcion != 3:
        print('''\nBienvenidos, por favor elija la opción que desee:

        1) Conversión de bases
        2) Serie de Fibonacci
        3) Salir\n''')

        opcion = int(input("Elija una opción: "))

        if opcion == 1:
            numero = int(input("Dame un número: "))
            print("\n\tEl número binario es: ", end='')
            recursividad_binario(numero)
            print()
        elif opcion == 2:
            n = int(input("Dame un número: "))
            print("\n\tSecuencia Fibonacci: ")
            for i in range(n):
                print(recursividad_fibo(i))
        elif opcion != 3:
            print("Debes digitar un número entre 1 y 3")
        else:
            print("Adiós")
        print("\n")
        print("=*="*15)
