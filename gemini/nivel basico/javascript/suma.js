function sumarNumeros(a, b) {

    return a + b;
  }

  try {
    const num1Str = prompt("Ingresa el primer número:");
    const num2Str = prompt("Ingresa el segundo número:");
  
    if (num1Str === null || num2Str === null) {
      console.log("Operación cancelada por el usuario.");
    } else {
      const num1 = parseFloat(num1Str);
      const num2 = parseFloat(num2Str);
  
      if (isNaN(num1) || isNaN(num2)) {
        console.error("Error: Por favor, ingresa números válidos.");
      } else {
        const resultado = sumarNumeros(num1, num2);
        console.log(`La suma de ${num1} y ${num2} es: ${resultado}`);
      }
    }
  } catch (e) {
    console.error("Ocurrió un error al procesar la entrada:", e);
  }
  
