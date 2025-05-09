import java.util.Scanner;
import java.text.Normalizer; // Para manejar tildes y caracteres especiales

public class Palindromo {

    public static class ResultadoPalindromo {
        boolean esPalindromo;
        String mensaje;

        ResultadoPalindromo(boolean esPalindromo, String mensaje) {
            this.esPalindromo = esPalindromo;
            this.mensaje = mensaje;
        }
    }

    public static ResultadoPalindromo esPalindromo(String cadena) {
        if (cadena == null || cadena.trim().isEmpty()) {
            return new ResultadoPalindromo(false, "La cadena original está vacía o solo contiene espacios.");
        }

        // Normalizar para quitar tildes y otros diacríticos (opcional pero recomendado)
        String cadenaNormalizada = Normalizer.normalize(cadena, Normalizer.Form.NFD);
        cadenaNormalizada = cadenaNormalizada.replaceAll("\\p{InCombiningDiacriticalMarks}+", "");

        // Convertir a minúsculas y quitar caracteres no alfanuméricos
        String cadenaLimpia = cadenaNormalizada.toLowerCase().replaceAll("[^a-z0-9]", "");

        if (cadenaLimpia.isEmpty()) {
             return new ResultadoPalindromo(false, "La cadena procesada está vacía (la original solo contenía espacios, puntuación o caracteres no alfanuméricos).");
        }

        int i = 0;
        int j = cadenaLimpia.length() - 1;
        while (i < j) {
            if (cadenaLimpia.charAt(i) != cadenaLimpia.charAt(j)) {
                return new ResultadoPalindromo(false, null);
            }
            i++;
            j--;
        }
        return new ResultadoPalindromo(true, null);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Ingresa una cadena de texto para verificar si es un palíndromo: ");
        String cadenaOriginal = scanner.nextLine();

        ResultadoPalindromo resultado = esPalindromo(cadenaOriginal);

        if (resultado.mensaje != null) {
            System.out.println(resultado.mensaje);
             if (!resultado.esPalindromo && resultado.mensaje.startsWith("La cadena procesada está vacía")){
                 System.out.println("Por lo tanto, '" + cadenaOriginal + "' NO se considera un palíndromo en este contexto.");
             } else if (!resultado.esPalindromo && resultado.mensaje.startsWith("La cadena original está vacía")) {
                  System.out.println("'" + cadenaOriginal + "' NO es un palíndromo.");
             }
        } else if (resultado.esPalindromo) {
            System.out.println("¡Felicidades! La cadena '" + cadenaOriginal + "' SÍ es un palíndromo.");
        } else {
            System.out.println("La cadena '" + cadenaOriginal + "' NO es un palíndromo.");
        }
        scanner.close();
    }
}