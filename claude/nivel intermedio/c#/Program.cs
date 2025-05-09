using System;
using System.Collections.Generic;
using System.Linq;

class CalcularPromedio {
    /**
     * Función que calcula el promedio de una lista de números.
     * 
     * @param numeros Lista de números
     * @return Promedio de los números o 0 si la lista está vacía
     */
    static double CalcularPromedioLista(List<double> numeros) {
        if (numeros.Count == 0) {
            return 0;
        }
        
        return numeros.Sum() / numeros.Count;
    }
    
    static void Main() {
        // Solicitar valores al usuario
        Console.Write("Ingrese una lista de números separados por comas: ");
        string entrada = Console.ReadLine().Trim();
        
        // Procesar la entrada del usuario
        List<double> numeros = new List<double>();
        if (!string.IsNullOrEmpty(entrada)) {
            string[] valores = entrada.Split(',');
            foreach (string valor in valores) {
                if (double.TryParse(valor.Trim(), out double numero)) {
                    numeros.Add(numero);
                } else {
                    Console.WriteLine($"Error: valor inválido ignorado: {valor}");
                }
            }
        }
        
        // Calcular y mostrar el resultado
        double resultado = CalcularPromedioLista(numeros);
        Console.WriteLine($"El promedio de la lista [{string.Join(", ", numeros)}] es: {resultado}");
    }
}