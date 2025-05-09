#include <iostream>
#include <string>
#include <algorithm> // Para std::remove_if, std::transform, std::equal
#include <cctype>    // Para std::tolower, std::isalnum
#include <locale>    // Para std::locale y facilidades de clasificación de caracteres (opcional para manejo avanzado de tildes)

// Estructura para el resultado
struct ResultadoPalindromo {
    bool esPalindromo;
    std::string mensaje;
    std::string cadenaProcesada;
};


// Función auxiliar para limpiar la cadena (simplificada, no maneja tildes complejas sin librerías adicionales)
std::string limpiarCadena(const std::string& cadena) {
    std::string limpia;
    for (char c : cadena) {
        if (std::isalnum(static_cast<unsigned char>(c))) { // isalnum espera unsigned char en algunas implementaciones
            limpia += std::tolower(static_cast<unsigned char>(c));
        }
    }
    return limpia;
}


ResultadoPalindromo esPalindromo(const std::string& cadenaOriginal) {
    if (cadenaOriginal.empty() || std::all_of(cadenaOriginal.begin(), cadenaOriginal.end(), ::isspace)) {
        return {false, "La cadena original está vacía o solo contiene espacios.", ""};
    }

    std::string cadenaLimpia = limpiarCadena(cadenaOriginal);

    if (cadenaLimpia.empty()) {
        return {false, "La cadena procesada está vacía (la original solo contenía puntuación o caracteres no alfanuméricos).", cadenaLimpia};
    }

    std::string reversa = cadenaLimpia;
    std::reverse(reversa.begin(), reversa.end());

    if (cadenaLimpia == reversa) {
        return {true, "", cadenaLimpia};
    } else {
        return {false, "", cadenaLimpia};
    }
}

int main() {
    std::string cadenaUsuario;
    std::cout << "Ingresa una cadena de texto para verificar si es un palíndromo: ";
    std::getline(std::cin, cadenaUsuario);

    ResultadoPalindromo resultado = esPalindromo(cadenaUsuario);
    
    if (!resultado.cadenaProcesada.empty()) {
        std::cout << "Cadena procesada (sin espacios/puntuación, en minúsculas): '" << resultado.cadenaProcesada << "'" << std::endl;
    }


    if (!resultado.mensaje.empty()) {
        std::cout << resultado.mensaje << std::endl;
        if (!resultado.esPalindromo && resultado.mensaje.find("procesada está vacía") != std::string::npos){
             std::cout << "Por lo tanto, '" << cadenaUsuario << "' NO se considera un palíndromo en este contexto." << std::endl;
         } else if (!resultado.esPalindromo && resultado.mensaje.find("original está vacía") != std::string::npos) {
              std::cout << "'" << cadenaUsuario << "' NO es un palíndromo." << std::endl;
         }
    } else if (resultado.esPalindromo) {
        std::cout << "¡Felicidades! La cadena '" << cadenaUsuario << "' SÍ es un palíndromo." << std::endl;
    } else {
        std::cout << "La cadena '" << cadenaUsuario << "' NO es un palíndromo." << std::endl;
    }

    return 0;
}