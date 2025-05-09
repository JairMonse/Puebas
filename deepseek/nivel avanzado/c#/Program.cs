using System;
using System.Linq;

class Program {
    static bool EsPalindromo(string texto) {
        string limpio = new string(texto.Where(c => char.IsLetterOrDigit(c)).ToArray()).ToLower();
        return limpio.SequenceEqual(limpio.Reverse());
    }
    
    static void Main() {
        Console.Write("Ingrese una cadena de texto: ");
        string cadena = Console.ReadLine();
        Console.WriteLine("¿Es palíndromo? " + EsPalindromo(cadena));
    }
}