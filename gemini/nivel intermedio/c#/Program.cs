using System;
using System.Collections.Generic;
using System.Linq;

public class PromedioLista
{
    public class ResultadoPromedio
    {
        public double Promedio { get; }
        public string MensajeError { get; }
        public bool TieneError => !string.IsNullOrEmpty(MensajeError);

        public ResultadoPromedio(double promedio, string mensajeError = null)
        {
            Promedio = promedio;
            MensajeError = mensajeError;
        }
    }

    public static ResultadoPromedio CalcularPromedio(List<double> listaNumeros)
    {
        if (listaNumeros == null || !listaNumeros.Any())
        {
            return new ResultadoPromedio(0, "La lista está vacía.");
        }
        double suma = listaNumeros.Sum();
        return new ResultadoPromedio(suma / listaNumeros.Count);
    }

    public static void Main(string[] args)
    {
        List<double> numeros = new List<double>();
        Console.WriteLine("Ingresa los números separados por espacios (ej: 1 2 3.5 4). Presiona Enter cuando termines:");
        string entrada = Console.ReadLine();

        if (string.IsNullOrWhiteSpace(entrada))
        {
            Console.WriteLine("No se ingresaron números. La lista está vacía.");
        }
        else
        {
            string[] numerosStr = entrada.Split(new[] { ' ', '\t' }, StringSplitOptions.RemoveEmptyEntries);
            bool entradaValidaGeneral = true;

            foreach (string strNum in numerosStr)
            {
                if (double.TryParse(strNum, System.Globalization.NumberStyles.Any, System.Globalization.CultureInfo.InvariantCulture, out double numero))
                {
                    numeros.Add(numero);
                }
                else
                {
                    Console.WriteLine($"Advertencia: '{strNum}' no es un número válido y será ignorado.");
                    entradaValidaGeneral = false; // Marcamos que hubo alguna entrada no válida, pero continuamos con las válidas
                }
            }

            if (!numeros.Any()) { // Si después de filtrar, la lista está vacía
                 Console.WriteLine("No se ingresaron números válidos. La lista está vacía.");
            } else {
                Console.WriteLine("Números procesados: " + string.Join(", ", numeros));
                ResultadoPromedio resultado = CalcularPromedio(numeros);

                if (resultado.TieneError)
                {
                    Console.WriteLine(resultado.MensajeError);
                }
                else
                {
                    Console.WriteLine($"El promedio de los números es: {resultado.Promedio:F2}");
                }
            }
        }
    }
}