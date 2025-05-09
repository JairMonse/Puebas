import java.util.Scanner;

public class App {

    public static double sumar(double a, double b) {
        return a + b;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        try {
            System.out.print("Ingresa el primer número: ");
            double num1 = scanner.nextDouble();

            System.out.print("Ingresa el segundo número: ");
            double num2 = scanner.nextDouble();

            double resultado = sumar(num1, num2);
            System.out.println("La suma de " + num1 + " y " + num2 + " es: " + resultado);
        } catch (java.util.InputMismatchException e) {
            System.out.println("Error: Por favor, ingresa números válidos.");
        } finally {
            scanner.close();
        }
    }
}