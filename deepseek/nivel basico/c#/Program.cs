using System;

class Program {
    static double Suma(double a, double b) {
        return a + b;
    }
    
    static void Main() {
        Console.Write("Ingrese el primer número: ");
        double num1 = Convert.ToDouble(Console.ReadLine());
        Console.Write("Ingrese el segundo número: ");
        double num2 = Convert.ToDouble(Console.ReadLine());
        Console.WriteLine("La suma es: " + Suma(num1, num2));
    }
}