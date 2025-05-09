const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Ingrese números separados por espacio: ", function(input) {
    const entrada = input.trim().split(/\s+/);
    const suma = entrada.reduce((acc, val) => acc + parseInt(val, 10), 0);
    console.log("Suma:", suma);
    rl.close();
});

