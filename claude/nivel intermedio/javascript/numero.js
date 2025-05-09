/**
 * Función que calcula el promedio de una lista de números.
 * 
 * @param {number[]} numeros - Lista de números
 * @returns {number} Promedio de los números o 0 si la lista está vacía
 */
function calcularPromedio(numeros) {
    if (numeros.length === 0) {
        return 0;
    }
    
    const suma = numeros.reduce((acumulador, actual) => acumulador + actual, 0);
    return suma / numeros.length;
}

// Solicitar valores al usuario
const entrada = prompt("Ingrese una lista de números separados por comas:");

// Procesar la entrada del usuario
let numeros = [];
if (entrada && entrada.trim()) {
    numeros = entrada.split(",")
                .map(valor => parseFloat(valor.trim()))
                .filter(valor => !isNaN(valor));
}

// Calcular y mostrar el resultado
const resultado = calcularPromedio(numeros);
console.log(`El promedio de la lista [${numeros}] es: ${resultado}`);