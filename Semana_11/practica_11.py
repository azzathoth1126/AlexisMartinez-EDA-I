def decimal_a_binario(numero):
    if numero == 0:
        return '0'
    resultado = ''
    while numero > 0:
        resultado = str(numero % 2) + resultado
        numero //= 2
    return resultado


def recur_fibo(n):
    if n <= 1:
        return n
    else:
        return recur_fibo(n - 1) + recur_fibo(n - 2)


if __name__ == '__main__':

    opcion = 1 

    while opcion != 3:

        print('''\nBienvenidos, por favor elija la opcion que desee:

        Conversion de bases
        Serie de Fibonacci
        Salir\n''')

        opcion = int(input("Elija una opcion: "))

        if opcion == 1:
            numero = int(input("Dame un numero: "))
            print(decimal_a_binario(numero))
        elif opcion == 2:
            n = int(input("Dame un numero: "))
            print("Secuencia Fibonacci: ")
            for i in range(n):
                print(recur_fibo(i))
        elif opcion != 3:
            print("Debes digitar un numero entre 1 y 3")
        else:
            print("Adios")
        print("=*="*15)