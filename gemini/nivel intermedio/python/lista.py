def calcular_promedio(lista_numeros):
  """
  Calcula el promedio de una lista de números.
  Devuelve 0 si la lista está vacía para evitar división por cero.
  """
  if not lista_numeros:
    return 0, "La lista está vacía."
  suma = sum(lista_numeros)
  promedio = suma / len(lista_numeros)
  return promedio, None

# Solicitud al usuario
print("Ingresa los números separados por comas (ej: 1,2,3.5,4):")
entrada_usuario = input()

if not entrada_usuario.strip():
    print("No se ingresaron números. La lista está vacía.")
else:
    try:
        numeros_str = entrada_usuario.split(',')
        numeros = [float(num.strip()) for num in numeros_str]
        
        if not numeros: # Caso donde la entrada es solo comas o espacios
            print("No se ingresaron números válidos. La lista está vacía.")
        else:
            promedio, mensaje_error = calcular_promedio(numeros)
            if mensaje_error:
                print(mensaje_error)
            else:
                print(f"La lista de números es: {numeros}")
                print(f"El promedio de los números es: {promedio:.2f}")
    except ValueError:
        print("Error: Asegúrate de ingresar solo números separados por comas.")