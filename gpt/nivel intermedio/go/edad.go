package main

import (
    "fmt"
)

func main() {
    var nombre string
    var edad int
    fmt.Print("Nombre: ")
    fmt.Scanln(&nombre)
    fmt.Print("Edad: ")
    fmt.Scanln(&edad)
    if edad >= 18 {
        fmt.Println("Es mayor de edad")
    } else {
        fmt.Println("Es menor de edad")
    }
}