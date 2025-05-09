import java.util.Scanner;

public class App {
    public static boolean esPalindromo(String texto) {
        String limpio = texto.replaceAll("[^a-zA-Z0-9]", "").toLowerCase();
        return limpio.equals(new StringBuilder(limpio).reverse().toString());
    }
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Ingrese una cadena de texto: ");
        String cadena = scanner.nextLine();
        System.out.println("¿Es palíndromo? " + esPalindromo(cadena));
    }
}