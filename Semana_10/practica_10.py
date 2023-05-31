def add_book(biblioteca):
    titulo = str(input("Titulo: "))
    isbn = int(input("ISBN: "))

    biblioteca[titulo] = isbn



def delet_book(bilioteca):
    print()


def order_books(biblioteca):
    print()


def books(biblioteca):
    for i in biblioteca:
        print(biblioteca)


if __name__ == '__main__':

    x = 1
    biblioteca = {}

    while x != 5:
        x = int(input('''
        \nBienvenido a la biblioteca, que movimiento quieres realizar:

        1. Agregar libro
        2. Borrar libro
        3. Ordenar biblioteca
        4. Ver biblioteca
        5. Salir

        '''))

        if x == 1:
            add_book(biblioteca)
        elif x == 2:
            delet_book(bilioteca)
        elif x == 3:
            order_books(biblioteca)
        elif x == 4:
            books(biblioteca)
        else:
            x = 5

