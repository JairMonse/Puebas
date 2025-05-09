package main

import (
    "fmt"
    "strconv"
    "strings"
)

/**
 * Función que calcula el promedio de una lista de números.
 * 
 * @param numeros Slice de números
 * @return Promedio de los números o 0 si la lista está vacía
 */
func calcularPromedio(numeros []float64) float64 {
    if len(numeros) == 0 {
        return 0
    }
    
    suma := 0.0
    for _, numero := range numeros {
        suma += numero
    }
    
    return suma / float64(len(numeros))
}

func main() {
    var entrada string
    
    // Solicitar valores al usuario
    fmt.Print("Ingrese una lista de números separados por comas: ")
    fmt.Scanln(&entrada)
    
    // Procesar la entrada del usuario
    numeros := []float64{}
    if strings.TrimSpace(entrada) != "" {
        valores := strings.Split(entrada, ",")
        for _, valor := range valores {
            if numero, err := strconv.ParseFloat(strings.TrimSpace(valor), 64); err == nil {
                numeros = append(numeros, numero)
            } else {
                fmt.Printf("Error: valor inválido ignorado: %s\n", valor)
            }
        }
    }
    
    // Calcular y mostrar el resultado
    resultado := calcularPromedio(numeros)
    fmt.Printf("El promedio de la lista %v es: %.2f\n", numeros, resultado)
}