def promedio(lista):
    if not lista:
        return 0
    return sum(lista) / len(lista)

numeros = input("Ingrese números separados por espacios: ").split()
numeros = [float(num) for num in numeros]
print("El promedio es:", promedio(numeros))