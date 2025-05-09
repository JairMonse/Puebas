import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class App {
    /**
     * Función que calcula el promedio de una lista de números.
     * 
     * @param numeros Lista de números
     * @return Promedio de los números o 0 si la lista está vacía
     */
    public static double calcularPromedio(List<Double> numeros) {
        if (numeros.isEmpty()) {
            return 0;
        }
        
        double suma = 0;
        for (Double numero : numeros) {
            suma += numero;
        }
        
        return suma / numeros.size();
    }
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        List<Double> numeros = new ArrayList<>();
        
        // Solicitar valores al usuario
        System.out.print("Ingrese una lista de números separados por comas: ");
        String entrada = scanner.nextLine().trim();
        
        // Procesar la entrada del usuario
        if (!entrada.isEmpty()) {
            String[] valores = entrada.split(",");
            for (String valor : valores) {
                try {
                    numeros.add(Double.parseDouble(valor.trim()));
                } catch (NumberFormatException e) {
                    System.out.println("Error: valor inválido ignorado: " + valor);
                }
            }
        }
        
        // Calcular y mostrar el resultado
        double resultado = calcularPromedio(numeros);
        System.out.println("El promedio de la lista " + numeros + " es: " + resultado);
        
        scanner.close();
    }
}
