package main

import "fmt"

func suma(a, b float64) float64 {
    return a + b
}

func main() {
    var num1, num2 float64
    fmt.Print("Ingrese el primer número: ")
    fmt.Scan(&num1)
    fmt.Print("Ingrese el segundo número: ")
    fmt.Scan(&num2)
    fmt.Println("La suma es:", suma(num1, num2))
}