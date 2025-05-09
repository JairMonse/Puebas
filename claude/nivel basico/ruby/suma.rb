def suma_numeros(a, b)
    return a + b
  end
  
  # Solicitar valores al usuario
  print "Ingrese el primer número: "
  num1 = gets.chomp.to_f
  
  print "Ingrese el segundo número: "
  num2 = gets.chomp.to_f
  
  # Calcular y mostrar el resultado
  resultado = suma_numeros(num1, num2)
  puts "La suma de #{num1} y #{num2} es: #{resultado}"