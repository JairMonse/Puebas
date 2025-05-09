import re

def es_palindromo(cadena):
  """
  Verifica si una cadena es un palíndromo, ignorando espacios,
  puntuación y diferencias entre mayúsculas/minúsculas.
  """
  # Convertir a minúsculas y quitar caracteres no alfanuméricos
  cadena_limpia = re.sub(r'[^a-z0-9]', '', cadena.lower())
  
  if not cadena_limpia: # Si la cadena original solo tenía espacios/puntuación
      return False, "La cadena procesada está vacía (solo contenía espacios/puntuación)."

  return cadena_limpia == cadena_limpia[::-1], None

# Solicitud al usuario
cadena_original = input("Ingresa una cadena de texto para verificar si es un palíndromo: ")

if not cadena_original.strip():
    print("No ingresaste ningún texto.")
else:
    es_pal, mensaje = es_palindromo(cadena_original)
    if mensaje:
        print(mensaje)
        print(f"La cadena '{cadena_original}' NO es un palíndromo.")
    elif es_pal:
        print(f"¡Felicidades! La cadena '{cadena_original}' SÍ es un palíndromo.")
    else:
        print(f"La cadena '{cadena_original}' NO es un palíndromo.")