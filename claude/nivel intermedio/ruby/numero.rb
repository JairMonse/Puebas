# Función que calcula el promedio de una lista de números.
#
# @param numeros [Array<Float>] Lista de números
# @return [Float] Promedio de los números o 0 si la lista está vacía
def calcular_promedio(numeros)
  return 0 if numeros.empty?
  
  suma = numeros.sum
  return suma.to_f / numeros.length
end

# Solicitar valores al usuario
print "Ingrese una lista de números separados por comas: "
entrada = gets.chomp.strip

# Procesar la entrada del usuario
numeros = []
if !entrada.empty?
  numeros = entrada.split(',').map do |valor|
    begin
      valor.strip.to_f
    rescue
      puts "Error: valor inválido ignorado: #{valor}"
      nil
    end
  end.compact
end

# Calcular y mostrar el resultado
resultado = calcular_promedio(numeros)
puts "El promedio de la lista #{numeros.inspect} es: #{resultado}"