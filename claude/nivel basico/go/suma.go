package main

import (
    "fmt"
)

/**
 * Función que calcula la suma de dos números.
 * 
 * @param a Primer número
 * @param b Segundo número
 * @return Resultado de la suma
 */
func sumaNumeros(a, b float64) float64 {
    return a + b
}

func main() {
    var num1, num2 float64
    
    // Solicitar valores al usuario
    fmt.Print("Ingrese el primer número: ")
    fmt.Scan(&num1)
    
    fmt.Print("Ingrese el segundo número: ")
    fmt.Scan(&num2)
    
    // Calcular y mostrar el resultado
    resultado := sumaNumeros(num1, num2)
    fmt.Printf("La suma de %.2f y %.2f es: %.2f\n", num1, num2, resultado)
}