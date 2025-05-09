puts "Ingrese números separados por espacio:"
entrada = gets.chomp.split.map(&:to_i)
puts "Suma: #{entrada.sum}"
