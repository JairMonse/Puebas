#include <iostream>
#include <vector>
#include <string>
#include <sstream> // Para std::stringstream
#include <numeric> // Para std::accumulate
#include <iomanip> // Para std::fixed y std::setprecision
#include <limits>  // Para std::numeric_limits

// Estructura para devolver el resultado y posible mensaje de error
struct ResultadoPromedio {
    double promedio;
    std::string mensajeError;
    bool tieneError;
};

ResultadoPromedio calcularPromedio(const std::vector<double>& listaNumeros) {
    if (listaNumeros.empty()) {
        return {0.0, "La lista está vacía.", true};
    }
    double suma = std::accumulate(listaNumeros.begin(), listaNumeros.end(), 0.0);
    return {suma / listaNumeros.size(), "", false};
}

int main() {
    std::vector<double> numeros;
    std::string linea;

    std::cout << "Ingresa los números separados por espacios (ej: 1 2 3.5 4). Presiona Enter cuando termines:" << std::endl;
    std::getline(std::cin, linea);

    std::stringstream ss(linea);
    double numero;
    bool entradaValida = false;

    if (linea.empty() || linea.find_first_not_of(" \t\n\v\f\r") == std::string::npos) { // Verifica si la línea está vacía o solo contiene espacios en blanco
        std::cout << "No se ingresaron números. La lista está vacía." << std::endl;
    } else {
        while (ss >> numero) {
            numeros.push_back(numero);
            entradaValida = true; // Se leyó al menos un número
            // Limpiar flags de error de stringstream si se encuentra algo que no es número entre números válidos
            if (ss.fail() && !ss.eof()) {
                 ss.clear();
                 std::string temp;
                 ss >> temp; // Leer y descartar la entrada no numérica
                 if (!temp.empty()) { // Si se leyó algo no numérico
                    std::cerr << "Advertencia: Se ignoró la entrada no numérica '" << temp << "'" << std::endl;
                 }
            }
        }
        
        if (!entradaValida && numeros.empty()) { // Si ss falló desde el inicio y no se leyeron números
            std::cout << "Error: No se ingresaron números válidos." << std::endl;
        } else if (numeros.empty() && entradaValida) { // Caso donde se ingresó algo pero no se convirtió a número (raro con el manejo anterior, pero por si acaso)
             std::cout << "No se ingresaron números válidos. La lista está vacía." << std::endl;
        } else {
            std::cout << "Números ingresados: ";
            for (size_t i = 0; i < numeros.size(); ++i) {
                std::cout << numeros[i] << (i == numeros.size() - 1 ? "" : ", ");
            }
            std::cout << std::endl;

            ResultadoPromedio resultado = calcularPromedio(numeros);

            if (resultado.tieneError) {
                std::cout << resultado.mensajeError << std::endl;
            } else {
                std::cout << std::fixed << std::setprecision(2); // Formatear a 2 decimales
                std::cout << "El promedio de los números es: " << resultado.promedio << std::endl;
            }
        }
    }

    return 0;
}