#include <iostream>

/**
 * Función que calcula la suma de dos números.
 * 
 * @param a Primer número
 * @param b Segundo número
 * @return Resultado de la suma
 */
double sumaNumeros(double a, double b) {
    return a + b;
}

int main() {
    double num1, num2;
    
    // Solicitar valores al usuario
    std::cout << "Ingrese el primer numero: ";
    std::cin >> num1;
    
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> num2;
    
    // Calcular y mostrar el resultado
    double resultado = sumaNumeros(num1, num2);
    std::cout << "La suma de " << num1 << " y " << num2 << " es: " << resultado << std::endl;
    
    return 0;
}