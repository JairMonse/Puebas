package main

import (
    "fmt"
    "sort"
)

type Producto struct {
    nombre, categoria string
    precio            int
}

func main() {
    productos := []Producto{
        {"A", "X", 30},
        {"B", "Y", 20},
        {"C", "X", 50},
    }

    var filtrados []Producto
    for _, p := range productos {
        if p.categoria == "X" {
            filtrados = append(filtrados, p)
        }
    }

    sort.Slice(filtrados, func(i, j int) bool {
        return filtrados[i].precio > filtrados[j].precio
    })

    for _, p := range filtrados {
        fmt.Printf("%s: %d\n", p.nombre, p.precio)
    }
}
