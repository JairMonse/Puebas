using System;
using System.Linq;

class Program {
    static double Promedio(double[] lista) {
        if (lista.Length == 0) return 0;
        return lista.Average();
    }
    
    static void Main() {
        Console.WriteLine("Ingrese números separados por espacios:");
        double[] numeros = Array.ConvertAll(Console.ReadLine().Split(' '), Double.Parse);
        Console.WriteLine("El promedio es: " + Promedio(numeros));
    }
}