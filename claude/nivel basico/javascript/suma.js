/**
 * Función que calcula la suma de dos números.
 * 
 * @param {number} a - Primer número
 * @param {number} b - Segundo número
 * @returns {number} Resultado de la suma
 */
function sumaNumeros(a, b) {
    return a + b;
}

// Solicitar valores al usuario
const num1 = parseFloat(prompt("Ingrese el primer número:"));
const num2 = parseFloat(prompt("Ingrese el segundo número:"));

// Calcular y mostrar el resultado
const resultado = sumaNumeros(num1, num2);
console.log(`La suma de ${num1} y ${num2} es: ${resultado}`);