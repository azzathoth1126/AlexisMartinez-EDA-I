def add_book(biblioteca):
    titulo = input("\nTitulo: ")
    idn = int(input("IDN: "))

    elemento = {'Titulo': titulo, 'IDN': idn}

    biblioteca.append(elemento)


def delete_book(biblioteca):
    print("\n   Libro - IDN")
    n = 1
    for libro in biblioteca:
        print("{}. {}".format(n, libro))
        n = n + 1

    x = int(input("Qué elemento quieres eliminar: "))
    biblioteca.pop((x - 1))


def order_books(biblioteca):
    for i in range(len(biblioteca)):
        for j in range(len(biblioteca) - i - 1):
            valor_actual = biblioteca[j].get('Titulo')
            valor_siguiente = biblioteca[j+1].get('Titulo')

            if valor_actual is not None and valor_siguiente is not None and valor_actual > valor_siguiente:
                biblioteca[j], biblioteca[j+1] = biblioteca[j+1], biblioteca[j]

    return biblioteca


def show_books(biblioteca):
    n = 1
    for libro in biblioteca:
        print("{}. {}".format(n, libro))
        n = n + 1


if __name__ == '__main__':
    x = 1
    biblioteca = []

    while x != 5:
        x = int(input('''
        \n\nBienvenido a la biblioteca, ¿qué movimiento quieres realizar?

        1. Agregar libro
        2. Borrar libro
        3. Ordenar biblioteca
        4. Ver biblioteca
        5. Salir \n\n'''))

        if x == 1:
            add_book(biblioteca)
        elif x == 2:
            delete_book(biblioteca)
        elif x == 3:
            biblioteca = order_books(biblioteca)
            show_books(biblioteca)
        elif x == 4:
            show_books(biblioteca)
        else:
            x = 5