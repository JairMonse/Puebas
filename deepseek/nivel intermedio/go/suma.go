package main

import (
	"fmt"
	"strings"
	"strconv"
)

func promedio(lista []float64) float64 {
	if len(lista) == 0 {
		return 0
	}
	suma := 0.0
	for _, num := range lista {
		suma += num
	}
	return suma / float64(len(lista))
}

func main() {
	var entrada string
	fmt.Print("Ingrese números separados por espacios: ")
	fmt.Scanln(&entrada)
	strNumeros := strings.Fields(entrada)
	var numeros []float64
	for _, str := range strNumeros {
		num, _ := strconv.ParseFloat(str, 64)
		numeros = append(numeros, num)
	}
	fmt.Println("El promedio es:", promedio(numeros))
}