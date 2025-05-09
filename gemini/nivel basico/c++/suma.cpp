#include <iostream>
#include <limits> // Necesario para std::numeric_limits

// Función para sumar dos números
double sumarNumeros(double a, double b) {
    return a + b;
}

int main() {
    double num1, num2;

    std::cout << "Ingresa el primer número: ";
    // Manejo de entrada inválida
    while (!(std::cin >> num1)) {
        std::cout << "Error: Ingresa un número válido: ";
        std::cin.clear(); // Limpia los flags de error
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Descarta la entrada incorrecta
    }

    std::cout << "Ingresa el segundo número: ";
    while (!(std::cin >> num2)) {
        std::cout << "Error: Ingresa un número válido: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    double resultado = sumarNumeros(num1, num2);
    std::cout << "La suma de " << num1 << " y " << num2 << " es: " << resultado << std::endl;

    return 0;
}