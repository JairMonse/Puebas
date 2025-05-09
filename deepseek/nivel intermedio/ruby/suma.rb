def promedio(lista)
  lista.empty? ? 0 : lista.sum / lista.size.to_f
end

print "Ingrese números separados por espacios: "
numeros = gets.chomp.split.map(&:to_f)
puts "El promedio es: #{promedio(numeros)}"