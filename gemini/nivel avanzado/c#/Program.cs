using System;
using System.Text;
using System.Text.RegularExpressions;
using System.Linq; // Para Char.IsLetterOrDigit

public class VerificadorPalindromo
{
    public class ResultadoPalindromo
    {
        public bool EsPal { get; }
        public string Mensaje { get; }
        public string CadenaProcesada { get; }

        public ResultadoPalindromo(bool esPal, string mensaje, string cadenaProcesada)
        {
            EsPal = esPal;
            Mensaje = mensaje;
            CadenaProcesada = cadenaProcesada;
        }
    }

    public static ResultadoPalindromo EsPalindromo(string cadena)
    {
        if (string.IsNullOrWhiteSpace(cadena))
        {
            return new ResultadoPalindromo(false, "La cadena original está vacía o solo contiene espacios.", "");
        }

        // Normalizar para quitar tildes (opcional pero bueno para internacionalización)
        // string cadenaNormalizada = cadena.Normalize(NormalizationForm.FormD);
        // var sbLimpia = new StringBuilder();
        // foreach (char c in cadenaNormalizada)
        // {
        //     if (System.Globalization.CharUnicodeInfo.GetUnicodeCategory(c) != System.Globalization.UnicodeCategory.NonSpacingMark)
        //     {
        //         sbLimpia.Append(c);
        //     }
        // }
        // string cadenaSinTildes = sbLimpia.ToString().Normalize(NormalizationForm.FormC);

        // Otra forma más simple de limpiar, pero menos robusta con diacríticos complejos:
        var sb = new StringBuilder();
        foreach (char c in cadena.ToLowerInvariant()) // Convertir a minúsculas
        {
            if (char.IsLetterOrDigit(c)) // Conservar solo letras y números
            {
                sb.Append(c);
            }
        }
        string cadenaLimpia = sb.ToString();

        if (string.IsNullOrEmpty(cadenaLimpia))
        {
            return new ResultadoPalindromo(false, "La cadena procesada está vacía (la original solo contenía puntuación o caracteres no alfanuméricos).", cadenaLimpia);
        }

        string cadenaInvertida = new string(cadenaLimpia.Reverse().ToArray());

        if (cadenaLimpia == cadenaInvertida)
        {
            return new ResultadoPalindromo(true, null, cadenaLimpia);
        }
        else
        {
            return new ResultadoPalindromo(false, null, cadenaLimpia);
        }
    }

    public static void Main(string[] args)
    {
        Console.Write("Ingresa una cadena de texto para verificar si es un palíndromo: ");
        string cadenaOriginal = Console.ReadLine();

        ResultadoPalindromo resultado = EsPalindromo(cadenaOriginal);

        if (!string.IsNullOrEmpty(resultado.CadenaProcesada))
        {
             Console.WriteLine($"Cadena procesada (sin espacios/puntuación, en minúsculas): '{resultado.CadenaProcesada}'");
        }


        if (!string.IsNullOrEmpty(resultado.Mensaje))
        {
            Console.WriteLine(resultado.Mensaje);
             if (!resultado.EsPal && resultado.Mensaje.Contains("procesada está vacía")){
                 Console.WriteLine($"Por lo tanto, '{cadenaOriginal}' NO se considera un palíndromo en este contexto.");
             } else if (!resultado.EsPal && resultado.Mensaje.Contains("original está vacía")) {
                  Console.WriteLine($"'{cadenaOriginal}' NO es un palíndromo.");
             }
        }
        else if (resultado.EsPal)
        {
            Console.WriteLine($"¡Felicidades! La cadena '{cadenaOriginal}' SÍ es un palíndromo.");
        }
        else
        {
            Console.WriteLine($"La cadena '{cadenaOriginal}' NO es un palíndromo.");
        }
    }
}