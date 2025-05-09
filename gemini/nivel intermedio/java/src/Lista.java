import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.InputMismatchException;

public class Lista {

    public static class ResultadoPromedio {
        double promedio;
        String mensajeError;

        ResultadoPromedio(double promedio, String mensajeError) {
            this.promedio = promedio;
            this.mensajeError = mensajeError;
        }
    }

    public static ResultadoPromedio calcularPromedio(List<Double> listaNumeros) {
        if (listaNumeros == null || listaNumeros.isEmpty()) {
            return new ResultadoPromedio(0, "La lista está vacía.");
        }
        double suma = 0;
        for (double num : listaNumeros) {
            suma += num;
        }
        return new ResultadoPromedio(suma / listaNumeros.size(), null);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        List<Double> numeros = new ArrayList<>();

        System.out.println("Ingresa los números separados por espacios (ej: 1 2 3.5 4). Escribe 'fin' para terminar:");

        while (true) {
            System.out.print("Ingresa un número o 'fin': ");
            String entrada = scanner.next();
            if (entrada.equalsIgnoreCase("fin")) {
                break;
            }
            try {
                numeros.add(Double.parseDouble(entrada));
            } catch (NumberFormatException e) {
                System.out.println("Entrada inválida. Por favor, ingresa un número o 'fin'.");
            }
        }
        
        scanner.nextLine(); // Consumir el resto de la línea si es necesario

        if (numeros.isEmpty()) {
             System.out.println("No se ingresaron números. La lista está vacía.");
        } else {
            System.out.println("Números ingresados: " + numeros);
            ResultadoPromedio resultado = calcularPromedio(numeros);

            if (resultado.mensajeError != null) {
                System.out.println(resultado.mensajeError);
            } else {
                System.out.printf("El promedio de los números es: %.2f\n", resultado.promedio);
            }
        }
        scanner.close();
    }
}