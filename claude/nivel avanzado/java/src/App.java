import java.util.Scanner;

public class App {
    /**
     * Función que determina si una cadena de texto es un palíndromo,
     * ignorando espacios, puntuación y diferencias entre mayúsculas y minúsculas.
     * 
     * @param texto Cadena de texto a evaluar
     * @return true si es palíndromo, false en caso contrario
     */
    public static boolean esPalindromo(String texto) {
        // Eliminar espacios, puntuación y convertir a minúsculas
        String textoProcesado = texto.toLowerCase().replaceAll("[^a-z0-9]", "");
        
        // Verificar si es palíndromo
        int longitud = textoProcesado.length();
        for (int i = 0; i < longitud / 2; i++) {
            if (textoProcesado.charAt(i) != textoProcesado.charAt(longitud - 1 - i)) {
                return false;
            }
        }
        
        return true;
    }
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Solicitar valor al usuario
        System.out.print("Ingrese una cadena de texto para verificar si es palíndromo: ");
        String entrada = scanner.nextLine();
        
        // Verificar y mostrar el resultado
        if (esPalindromo(entrada)) {
            System.out.println("\"" + entrada + "\" es un palíndromo.");
        } else {
            System.out.println("\"" + entrada + "\" no es un palíndromo.");
        }
        
        scanner.close();
    }
}