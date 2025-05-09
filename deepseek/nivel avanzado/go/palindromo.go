package main

import (
	"fmt"
	"strings"
	"unicode"
)

func esPalindromo(texto string) bool {
	var limpio strings.Builder
	for _, r := range texto {
		if unicode.IsLetter(r) || unicode.IsDigit(r) {
			limpio.WriteRune(unicode.ToLower(r))
		}
	}
	str := limpio.String()
	for i := 0; i < len(str)/2; i++ {
		if str[i] != str[len(str)-1-i] {
			return false
		}
	}
	return true
}

func main() {
	var cadena string
	fmt.Print("Ingrese una cadena de texto: ")
	fmt.Scanln(&cadena)
	fmt.Println("¿Es palíndromo?", esPalindromo(cadena))
}