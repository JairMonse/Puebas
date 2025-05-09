function calcularPromedio(listaNumeros) {
    /**
     * Calcula el promedio de una lista de números.
     * Devuelve un objeto con el promedio o un mensaje de error.
     */
    if (!listaNumeros || listaNumeros.length === 0) {
      return { promedio: 0, error: "La lista está vacía." };
    }
    const suma = listaNumeros.reduce((acc, current) => acc + current, 0);
    return { promedio: suma / listaNumeros.length, error: null };
  }
  
  // Solicitud al usuario (funciona en la consola del navegador)
  try {
    const entradaUsuario = prompt("Ingresa los números separados por comas (ej: 1,2,3.5,4):");
  
    if (entradaUsuario === null) {
      console.log("Operación cancelada por el usuario.");
    } else if (!entradaUsuario.trim()) {
      console.log("No se ingresaron números. La lista está vacía.");
    } else {
      const numerosStr = entradaUsuario.split(',');
      const numeros = [];
      let entradaValida = true;
  
      for (let strNum of numerosStr) {
        const num = parseFloat(strNum.trim());
        if (isNaN(num)) {
          console.error(`Error: '${strNum.trim()}' no es un número válido. Asegúrate de ingresar solo números separados por comas.`);
          entradaValida = false;
          break;
        }
        numeros.push(num);
      }
  
      if (entradaValida) {
        if (numeros.length === 0) { // Caso donde la entrada es solo comas o espacios y se filtran a nada
            console.log("No se ingresaron números válidos. La lista está vacía.");
        } else {
            console.log(`Números ingresados: ${numeros.join(', ')}`);
            const resultado = calcularPromedio(numeros);
  
            if (resultado.error) {
              console.log(resultado.error);
            } else {
              console.log(`El promedio de los números es: ${resultado.promedio.toFixed(2)}`);
            }
        }
      }
    }
  } catch (e) {
    console.error("Ocurrió un error al procesar la entrada:", e);
  }
  