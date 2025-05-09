using System;
using System.Collections.Generic;
using System.Linq;

class Producto {
    public string Nombre, Categoria;
    public int Precio;
    public Producto(string n, int p, string c) {
        Nombre = n; Precio = p; Categoria = c;
    }
}

class Program {
    static void Main() {
        var productos = new List<Producto> {
            new Producto("A", 30, "X"),
            new Producto("B", 20, "Y"),
            new Producto("C", 50, "X")
        };

        var resultado = productos
            .Where(p => p.Categoria == "X")
            .OrderByDescending(p => p.Precio);

        foreach (var p in resultado)
            Console.WriteLine($"{p.Nombre}: {p.Precio}");
    }
}
