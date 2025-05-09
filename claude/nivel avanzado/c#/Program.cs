using System;
using System.Text.RegularExpressions;

class VerificarPalindromo {
    /**
     * Función que determina si una cadena de texto es un palíndromo,
     * ignorando espacios, puntuación y diferencias entre mayúsculas y minúsculas.
     * 
     * @param texto Cadena de texto a evaluar
     * @return true si es palíndromo, false en caso contrario
     */
    static bool EsPalindromo(string texto) {
        // Eliminar espacios, puntuación y convertir a minúsculas
        string textoProcesado = Regex.Replace(texto.ToLower(), @"[^\w]", "");
        textoProcesado = Regex.Replace(textoProcesado, @"_", "");
        
        // Verificar si es palíndromo
        int longitud = textoProcesado.Length;
        for (int i = 0; i < longitud / 2; i++) {
            if (textoProcesado[i] != textoProcesado[longitud - 1 - i]) {
                return false;
            }
        }
        
        return true;
    }
    
    static void Main() {
        // Solicitar valor al usuario
        Console.Write("Ingrese una cadena de texto para verificar si es palíndromo: ");
        string entrada = Console.ReadLine();
        
        // Verificar y mostrar el resultado
        if (EsPalindromo(entrada)) {
            Console.WriteLine($"\"{entrada}\" es un palíndromo.");
        } else {
            Console.WriteLine($"\"{entrada}\" no es un palíndromo.");
        }
    }
}