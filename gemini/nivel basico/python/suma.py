def sumar_numeros(a, b):
  """
  Esta función recibe dos números y devuelve su suma.
  """
  return a + b

try:
  num1 = float(input("Ingresa el primer número: "))
  num2 = float(input("Ingresa el segundo número: "))

  resultado = sumar_numeros(num1, num2)
  print(f"La suma de {num1} y {num2} es: {resultado}")
except ValueError:
  print("Error: Por favor, ingresa números válidos.")