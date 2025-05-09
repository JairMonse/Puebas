def calcular_promedio(numeros):
    """
    Función que calcula el promedio de una lista de números.
    
    Args:
        numeros (list): Lista de números
        
    Returns:
        float: Promedio de los números o 0 si la lista está vacía
    """
    if not numeros:
        return 0
    
    return sum(numeros) / len(numeros)

# Solicitar valores al usuario
entrada = input("Ingrese una lista de números separados por comas: ")

# Procesar la entrada del usuario
if entrada.strip():
    numeros = [float(x.strip()) for x in entrada.split(",")]
else:
    numeros = []

# Calcular y mostrar el resultado
resultado = calcular_promedio(numeros)
print(f"El promedio de la lista {numeros} es: {resultado}")