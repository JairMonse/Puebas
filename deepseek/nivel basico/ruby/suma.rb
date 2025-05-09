def suma(a, b)
  a + b
end

print "Ingrese el primer número: "
num1 = gets.chomp.to_f
print "Ingrese el segundo número: "
num2 = gets.chomp.to_f
puts "La suma es: #{suma(num1, num2)}"