print "Nombre: "
nombre = gets.chomp
print "Edad: "
edad = gets.chomp.to_i
puts edad >= 18 ? "Es mayor de edad" : "Es menor de edad"