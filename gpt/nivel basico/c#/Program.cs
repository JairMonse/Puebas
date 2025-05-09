
using System;
using System.Linq;

class Program {
    static void Main() {
        Console.WriteLine("Ingrese números separados por espacio:");
        var suma = Console.ReadLine()
            .Split(' ')
            .Select(int.Parse)
            .Sum();
        Console.WriteLine($"Suma: {suma}");
    }
}