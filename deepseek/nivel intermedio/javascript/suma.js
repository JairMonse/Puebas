function promedio(lista) {
    if (lista.length === 0) return 0;
    return lista.reduce((a, b) => a + b, 0) / lista.length;
}

const entrada = prompt("Ingrese números separados por espacios:");
const numeros = entrada.split(' ').map(num => parseFloat(num));
console.log("El promedio es:", promedio(numeros));