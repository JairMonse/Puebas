#include <iostream>
#include <vector>
#include <sstream>
#include <string>

/**
 * Función que calcula el promedio de una lista de números.
 * 
 * @param numeros Vector de números
 * @return Promedio de los números o 0 si la lista está vacía
 */
double calcularPromedio(const std::vector<double>& numeros) {
    if (numeros.empty()) {
        return 0;
    }
    
    double suma = 0;
    for (double numero : numeros) {
        suma += numero;
    }
    
    return suma / numeros.size();
}

int main() {
    std::string entrada;
    std::vector<double> numeros;
    
    // Solicitar valores al usuario
    std::cout << "Ingrese una lista de números separados por comas: ";
    std::getline(std::cin, entrada);
    
    // Procesar la entrada del usuario
    if (!entrada.empty()) {
        std::stringstream ss(entrada);
        std::string valor;
        
        while (std::getline(ss, valor, ',')) {
            try {
                numeros.push_back(std::stod(valor));
            } catch (const std::exception& e) {
                std::cout << "Error: valor inválido ignorado: " << valor << std::endl;
            }
        }
    }
    
    // Calcular y mostrar el resultado
    double resultado = calcularPromedio(numeros);
    
    // Mostrar la lista y el resultado
    std::cout << "El promedio de la lista [";
    for (size_t i = 0; i < numeros.size(); ++i) {
        std::cout << numeros[i];
        if (i < numeros.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "] es: " << resultado << std::endl;
    
    return 0;
}