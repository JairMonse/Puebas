def es_palindromo(texto)
  limpio = texto.downcase.gsub(/[^a-z0-9]/, '')
  limpio == limpio.reverse
end

print "Ingrese una cadena de texto: "
cadena = gets.chomp
puts "¿Es palíndromo? #{es_palindromo(cadena)}"