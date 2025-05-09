/**
 * Función que determina si una cadena de texto es un palíndromo,
 * ignorando espacios, puntuación y diferencias entre mayúsculas y minúsculas.
 * 
 * @param {string} texto - Cadena de texto a evaluar
 * @returns {boolean} true si es palíndromo, false en caso contrario
 */
function esPalindromo(texto) {
    // Eliminar espacios, puntuación y convertir a minúsculas
    const textoProcesado = texto.toLowerCase().replace(/[^\w]/g, '').replace(/_/g, '');
    
    // Verificar si es palíndromo
    const textReversed = textoProcesado.split('').reverse().join('');
    return textoProcesado === textReversed;
}

// Solicitar valor al usuario
const entrada = prompt("Ingrese una cadena de texto para verificar si es palíndromo:");

// Verificar y mostrar el resultado
if (esPalindromo(entrada)) {
    console.log(`"${entrada}" es un palíndromo.`);
} else {
    console.log(`"${entrada}" no es un palíndromo.`);
}