using System;

class Program {
    static void Main() {
        Console.Write("Nombre: ");
        string nombre = Console.ReadLine();
        Console.Write("Edad: ");
        int edad = int.Parse(Console.ReadLine());
        Console.WriteLine(edad >= 18 ? "Es mayor de edad" : "Es menor de edad");
    }
}