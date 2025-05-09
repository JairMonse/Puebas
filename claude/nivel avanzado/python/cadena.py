def es_palindromo(texto):
    """
    Función que determina si una cadena de texto es un palíndromo,
    ignorando espacios, puntuación y diferencias entre mayúsculas y minúsculas.
    
    Args:
        texto (str): Cadena de texto a evaluar
        
    Returns:
        bool: True si es palíndromo, False en caso contrario
    """
    import re
    
    # Eliminar espacios, puntuación y convertir a minúsculas
    texto_procesado = re.sub(r'[^\w]', '', texto.lower())
    
    # Verificar si es palíndromo
    return texto_procesado == texto_procesado[::-1]

# Solicitar valor al usuario
entrada = input("Ingrese una cadena de texto para verificar si es palíndromo: ")

# Verificar y mostrar el resultado
if es_palindromo(entrada):
    print(f'"{entrada}" es un palíndromo.')
else:
    print(f'"{entrada}" no es un palíndromo.')