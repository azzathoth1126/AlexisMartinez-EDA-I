def add_book(biblioteca):

    titulo = str(input("\nTitulo: "))
    isbn = int(input("ISBN: "))

    elemento = {}
    elemento[titulo]=isbn

    biblioteca.append(elemento)


def delet_book(biblioteca):
    print("\n   Libro - IDN")
    n = 1
    for libro in biblioteca:    
        print("{}. {}".format(n, libro))
        n = n+1
    
    x = int(input("Que elemeto quiere eliminar: "))
    biblioteca.pop((x-1))



def order_books(biblioteca):
    biblioteca_ord = biblioteca
    i = 0
    j = 0

    if (biblioteca_ord[] )





def books(biblioteca):
    print("\n   Libro - IDN")
    n = 1
    for libro in biblioteca:    
        print("{}. {}".format(n, libro))
        n = n+1


if __name__ == '__main__':

    x = 1
    biblioteca = []

    while x != 5:
        x = int(input('''
        \nBienvenido a la biblioteca, que movimiento quieres realizar:

        1. Agregar libro
        2. Borrar libro
        3. Ordenar biblioteca
        4. Ver biblioteca
        5. Salir \n\n'''))

        if x == 1:
            add_book(biblioteca)
        elif x == 2:
            delet_book(biblioteca)
        elif x == 3:
            order_books(biblioteca)
        elif x == 4:
            books(biblioteca)
        else:
            x = 5
