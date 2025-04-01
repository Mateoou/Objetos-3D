#Crea las listas
vertices = []
caras = []

#muestra el menu y pide una opción
while True:
    print("1 = vertices")
    print("2 = caras")
    print("3 = mostrar resultados")
    print("4 = fin")

    menu = int(input("\nQue quiere hacer?: "))
#Opción 1
    if menu == 1:
        v = int(input("Ingrese cuántos vértices: "))

        for i in range(v):
            print(f"\nVértice {i+1}:")
            x = float(input("x: "))
            y = float(input("y: "))
            z = float(input("z: "))
            vertices.append((x, y, z))
#Opción 2
    elif menu == 2:
        m = int(input("\nIngrese la cantidad de caras: "))

        for i in range(m):
            print(f"\nCara {i+1}:")
            num_vertices = int(input("Número de vértices para esta cara: "))
            indices = []

            for j in range(num_vertices):
                indice = int(input(f"Índice del vértice {j+1}: "))
                indices.append(indice)

            caras.append(indices)
#Opción 3
    elif menu == 3:
        print("\nVértices:")
        for i, vert in enumerate(vertices, 1):
            print(f"{i}. {vert}")

        print("\nCaras:")
        for i, cara in enumerate(caras, 1):
            print(f"{i}. {cara}")
#Opción 4
    elif menu == 4:
        print("Fin")
        break
#Opción invalida
    else:
        print("Opción inválida. Por favor, seleccione una opción válida.")
