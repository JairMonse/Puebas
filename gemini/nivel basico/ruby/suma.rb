def sumar_numeros(a, b)
  a + b
end

puts "Ingresa el primer número:"
num1_str = gets.chomp
puts "Ingresa el segundo número:"
num2_str = gets.chomp

begin
  num1 = Float(num1_str)
  num2 = Float(num2_str)
  resultado = sumar_numeros(num1, num2)
  puts "La suma de #{num1} y #{num2} es: #{resultado}"
rescue ArgumentError
  puts "Error: Por favor, ingresa números válidos."
end