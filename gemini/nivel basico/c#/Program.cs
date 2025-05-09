using System;

public class SumarNumeros
{
    public static double Sumar(double a, double b)
    {
        return a + b;
    }

    public static void Main(string[] args)
    {
        double num1, num2;

        Console.Write("Ingresa el primer número: ");
        while (!double.TryParse(Console.ReadLine(), out num1))
        {
            Console.WriteLine("Error: Ingresa un número válido.");
            Console.Write("Ingresa el primer número: ");
        }

        Console.Write("Ingresa el segundo número: ");
        while (!double.TryParse(Console.ReadLine(), out num2))
        {
            Console.WriteLine("Error: Ingresa un número válido.");
            Console.Write("Ingresa el segundo número: ");
        }

        double resultado = Sumar(num1, num2);
        Console.WriteLine($"La suma de {num1} y {num2} es: {resultado}");
    }
}