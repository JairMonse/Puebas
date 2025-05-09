function esPalindromo(texto) {
    const limpio = texto.toLowerCase().replace(/[^a-z0-9]/g, '');
    return limpio === limpio.split('').reverse().join('');
}

const cadena = prompt("Ingrese una cadena de texto:");
console.log("¿Es palíndromo?", esPalindromo(cadena));