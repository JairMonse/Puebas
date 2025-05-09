import java.util.Scanner;

public class App {
    public static double suma(double a, double b) {
        return a + b;
    }
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Ingrese el primer número: ");
        double num1 = scanner.nextDouble();
        System.out.print("Ingrese el segundo número: ");
        double num2 = scanner.nextDouble();
        System.out.println("La suma es: " + suma(num1, num2));
    }
}