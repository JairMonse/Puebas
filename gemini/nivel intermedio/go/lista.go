package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

// ResultadoPromedio encapsula el promedio y un posible mensaje de error.
type ResultadoPromedio struct {
	Promedio     float64
	MensajeError string
	TieneError   bool
}

func calcularPromedio(listaNumeros []float64) ResultadoPromedio {
	if len(listaNumeros) == 0 {
		return ResultadoPromedio{Promedio: 0, MensajeError: "La lista está vacía.", TieneError: true}
	}
	var suma float64
	for _, num := range listaNumeros {
		suma += num
	}
	return ResultadoPromedio{Promedio: suma / float64(len(listaNumeros)), MensajeError: "", TieneError: false}
}

func main() {
    reader := bufio.NewReader(os.Stdin)
    fmt.Println("Ingresa los números separados por espacios (ej: 1 2 3.5 4). Presiona Enter cuando termines:")
    entrada, _ := reader.ReadString('\n')
    entrada = strings.TrimSpace(entrada)

    var numeros []float64

    if entrada == "" {
        fmt.Println("No se ingresaron números. La lista está vacía.")
    } else {
        partes := strings.Fields(entrada) // Divide por espacios y tabulaciones
        entradaValidaGeneral := true

        for _, parte := range partes {
            num, err := strconv.ParseFloat(strings.TrimSpace(parte), 64)
            if err != nil {
                fmt.Printf("Advertencia: '%s' no es un número válido y será ignorado.\n", parte)
                entradaValidaGeneral = false // Hubo al menos una entrada inválida
                continue // Saltar esta parte e intentar con la siguiente
            }
            numeros = append(numeros, num)
        }

        if !entradaValidaGeneral {
            fmt.Println("Algunos valores no eran válidos y fueron ignorados.")
        }
    }
}