const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question("Ingrese su nombre: ", (nombre) => {
  rl.question("Ingrese su edad: ", (edadStr) => {
    const edad = parseInt(edadStr);
    console.log(edad >= 18 ? "Es mayor de edad" : "Es menor de edad");
    rl.close();
  });
});
