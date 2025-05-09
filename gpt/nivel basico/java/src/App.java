import java.util.*;

public class App {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Ingrese números separados por espacio:");
            String[] entrada = sc.nextLine().split(" ");
            int suma = 0;
            for (String num : entrada) suma += Integer.parseInt(num);
            System.out.println("Suma: " + suma);
        } catch (NumberFormatException e) {
            System.out.println("Error: Ingrese solo números válidos.");
        }
    }
}
