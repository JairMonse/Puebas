using System;

class SumaNumeros {
    static double SumarNumeros(double a, double b) {
        return a + b;
    }
    
    static void Main() {
        // Solicitar valores al usuario
        Console.Write("Ingrese el primer número: ");
        double num1 = Convert.ToDouble(Console.ReadLine());
        
        Console.Write("Ingrese el segundo número: ");
        double num2 = Convert.ToDouble(Console.ReadLine());
        
        // Calcular y mostrar el resultado
        double resultado = SumarNumeros(num1, num2);
        Console.WriteLine($"La suma de {num1} y {num2} es: {resultado}");
    }
}