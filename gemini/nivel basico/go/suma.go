package main

import (
	"fmt"
	"strconv"
	"bufio"
	"os"
	"strings"
)

func sumarNumeros(a float64, b float64) float64 {
	return a + b
}

func main() {
	reader := bufio.NewReader(os.Stdin)

	fmt.Print("Ingresa el primer número: ")
	num1Str, _ := reader.ReadString('\n')
	num1Str = strings.TrimSpace(num1Str) // Eliminar espacios y saltos de línea

	fmt.Print("Ingresa el segundo número: ")
	num2Str, _ := reader.ReadString('\n')
	num2Str = strings.TrimSpace(num2Str)

	num1, err1 := strconv.ParseFloat(num1Str, 64)
	num2, err2 := strconv.ParseFloat(num2Str, 64)

	if err1 != nil || err2 != nil {
		fmt.Println("Error: Por favor, ingresa números válidos.")
		return
	}

	resultado := sumarNumeros(num1, num2)
	fmt.Printf("La suma de %.2f y %.2f es: %.2f\n", num1, num2, resultado)
}