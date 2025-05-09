import java.util.*;


public class App {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Nombre: ");
            String nombre = sc.nextLine();
            System.out.print("Edad: ");
            int edad = sc.nextInt();
            System.out.println(edad >= 18 ? "Es mayor de edad" : "Es menor de edad");
        }
    }
}
