import java.util.Scanner;

public class SumaNumeros {
    /**
     * Función que calcula la suma de dos números.
     * 
     * @param a Primer número
     * @param b Segundo número
     * @return Resultado de la suma
     */
    public static double sumaNumeros(double a, double b) {
        return a + b;
    }
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Solicitar valores al usuario
        System.out.print("Ingrese el primer número: ");
        double num1 = scanner.nextDouble();
        
        System.out.print("Ingrese el segundo número: ");
        double num2 = scanner.nextDouble();
        
        // Calcular y mostrar el resultado
        double resultado = sumaNumeros(num1, num2);
        System.out.println("La suma de " + num1 + " y " + num2 + " es: " + resultado);
        
        scanner.close();
    }
}