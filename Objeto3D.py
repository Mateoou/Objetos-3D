# Pedir los vértices
v = int(input("Ingrese cuántos vértices: "))
vertices = []

for i in range(v):
    print(f"\nVértice {i+1}:")
    x = float(input("x: "))
    y = float(input("y: "))
    z = float(input("z: "))
    vertices.append((x, y, z))

# Pedir las caras
m = int(input("\nIngrese la cantidad de caras: "))
caras = []

for i in range(m):
    print(f"\nCara {i+1}:")
    num_vertices = int(input("Número de vértices para esta cara: "))
    indices = []
    
    for j in range(num_vertices):
        indice = int(input(f"Índice del vértice {j+1}: "))
        indices.append(indice)
    
    caras.append(indices)

# Mostrar resultados
print("\nVértices:")
for i, vert in enumerate(vertices, 1):
    print(f"{i}. {vert}")

print("\nCaras:")
for i, cara in enumerate(caras, 1):
    print(f"{i}. {cara}")
