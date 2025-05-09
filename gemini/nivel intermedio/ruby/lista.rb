def calcular_promedio(lista_numeros)
  return { promedio: 0, error: "La lista está vacía." } if lista_numeros.nil? || lista_numeros.empty?
  
  suma = lista_numeros.sum
  { promedio: suma.to_f / lista_numeros.length, error: nil }
end

puts "Ingresa los números separados por comas (ej: 1,2,3.5,4):"
entrada_usuario = gets.chomp

if entrada_usuario.strip.empty?
  puts "No se ingresaron números. La lista está vacía."
else
  numeros_str = entrada_usuario.split(',')
  numeros = []
  valido = true

  numeros_str.each do |s|
    s_limpio = s.strip
    next if s_limpio.empty? # Ignorar elementos vacíos (ej. comas seguidas ",,")
    begin
      numeros << Float(s_limpio)
    rescue ArgumentError
      puts "Error: '#{s_limpio}' no es un número válido. Asegúrate de ingresar solo números separados por comas."
      valido = false
      break
    end
  end

  if valido
    if numeros.empty? # Si después de procesar, no quedaron números válidos (ej. entrada fue solo comas)
        puts "No se ingresaron números válidos. La lista está vacía."
    else
        puts "Números ingresados: #{numeros.join(', ')}"
        resultado = calcular_promedio(numeros)

        if resultado[:error]
            puts resultado[:error]
        else
            puts "El promedio de los números es: %.2f" % resultado[:promedio]
        end
    end
  end
end