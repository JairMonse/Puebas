import java.util.Scanner;
import java.util.ArrayList;

public class App {
    public static double promedio(ArrayList<Double> lista) {
        if (lista.isEmpty()) return 0;
        double suma = 0;
        for (double num : lista) suma += num;
        return suma / lista.size();
    }
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ArrayList<Double> numeros = new ArrayList<>();
        System.out.println("Ingrese números separados por espacios (enter para terminar):");
        String[] input = scanner.nextLine().split(" ");
        for (String num : input) {
            if (!num.isEmpty()) numeros.add(Double.parseDouble(num));
        }
        System.out.println("El promedio es: " + promedio(numeros));
    }
}