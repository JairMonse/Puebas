#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

/**
 * Función que determina si una cadena de texto es un palíndromo,
 * ignorando espacios, puntuación y diferencias entre mayúsculas y minúsculas.
 * 
 * @param texto Cadena de texto a evaluar
 * @return true si es palíndromo, false en caso contrario
 */
bool esPalindromo(const std::string& texto) {
    std::string textoProcesado;
    
    // Eliminar espacios, puntuación y convertir a minúsculas
    for (char c : texto) {
        if (std::isalnum(c)) {
            textoProcesado += std::tolower(c);
        }
    }
    
    // Verificar si es palíndromo
    int longitud = textoProcesado.length();
    for (int i = 0; i < longitud / 2; i++) {
        if (textoProcesado[i] != textoProcesado[longitud - 1 - i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    std::string entrada;
    
    // Solicitar valor al usuario
    std::cout << "Ingrese una cadena de texto para verificar si es palíndromo: ";
    std::getline(std::cin, entrada);
    
    // Verificar y mostrar el resultado
    if (esPalindromo(entrada)) {
        std::cout << "\"" << entrada << "\" es un palíndromo." << std::endl;
    } else {
        std::cout << "\"" << entrada << "\" no es un palíndromo." << std::endl;
    }
    
    return 0;
}