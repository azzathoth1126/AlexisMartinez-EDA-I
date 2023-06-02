def factorial_recursivo(numero):
    if numero < 2:
        return 1
    return numero * factorial_recursivo(numero - 1)


def recur_fibo(n):
    if n <= 1:
        return n
    else:
        return recur_fibo(n - 1) + recur_fibo(n - 2)


if __name__ == '__main__':
    
    print('''Bienvenidos, por favor elija la opcion que desee:

    Conversion de bases
    Serie de Fibonacci
    Salir''')

    opcion = int(input("Elija una opcion: "))

    if opcion == 1:
        numero = int(input("Dame un numero: "))
        print(factorial_recursivo(numero))
    elif opcion == 2:
        n = int(input("Dame un numero: "))
        print("Secuencia Fibonacci: ")
        for i in range(n):
            print(recur_fibo(i))
    elif opcion != 3:
        print("Debes digitar un numero entre 1 y 3")
    else:
        print("Adios")