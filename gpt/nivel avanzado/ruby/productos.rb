productos = [
  { nombre: "A", precio: 30, categoria: "X" },
  { nombre: "B", precio: 20, categoria: "Y" },
  { nombre: "C", precio: 50, categoria: "X" }
]

resultado = productos
  .select { |p| p[:categoria] == "X" }
  .sort_by { |p| -p[:precio] }

puts resultado
