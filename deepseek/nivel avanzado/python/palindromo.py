import re

def es_palindromo(texto):
    texto = re.sub(r'[^a-zA-Z0-9]', '', texto).lower()
    return texto == texto[::-1]

cadena = input("Ingrese una cadena de texto: ")
print("¿Es palíndromo?", es_palindromo(cadena))