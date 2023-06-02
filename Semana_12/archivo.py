# Lista de diccionarios
lista_diccionarios = [
    {'nombre': 'Alex', 'edad': 80},
    {'nombre': 'María', 'edad': 30},
    {'nombre': 'Pedro', 'edad': 20}
]

# Ordenar la lista de diccionarios por las claves 'edad' y 'nombre'
lista_ordenada = sorted(lista_diccionarios, key=lambda x: (x['edad'], x['nombre']))

# Imprimir la lista ordenada
for diccionario in lista_ordenada:
    print(diccionario)
