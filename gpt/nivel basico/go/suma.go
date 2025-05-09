package main

import (
    "bufio"
    "fmt"
    "os"
    "strconv"
    "strings"
)

func main() {
    fmt.Println("Ingrese números separados por espacio:")
    scanner := bufio.NewScanner(os.Stdin)
    scanner.Scan()
    entrada := strings.Split(scanner.Text(), " ")
    suma := 0
    for _, val := range entrada {
        num, _ := strconv.Atoi(val)
        suma += num
    }
    fmt.Println("Suma:", suma)
}