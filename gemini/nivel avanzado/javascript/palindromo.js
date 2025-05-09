function esPalindromo(cadena) {
    /**
     * Verifica si una cadena es un palíndromo, ignorando espacios,
     * puntuación y diferencias entre mayúsculas/minúsculas.
     * Devuelve un objeto con el resultado y la cadena procesada.
     */
    if (cadena === null || typeof cadena !== 'string' || cadena.trim() === "") {
      return { esPal: false, mensaje: "La cadena original está vacía o solo contiene espacios.", cadenaLimpia: "" };
    }
  
    // Normalizar para quitar tildes y otros diacríticos
    const cadenaNormalizada = cadena.normalize("NFD").replace(/[\u0300-\u036f]/g, "");
    
    // Convertir a minúsculas y quitar caracteres no alfanuméricos
    const cadenaLimpia = cadenaNormalizada.toLowerCase().replace(/[^a-z0-9]/g, '');
  
    if (cadenaLimpia === "") {
      return { esPal: false, mensaje: "La cadena procesada está vacía (la original solo contenía espacios, puntuación o caracteres no alfanuméricos).", cadenaLimpia: cadenaLimpia };
    }
    
    const cadenaInvertida = cadenaLimpia.split('').reverse().join('');
    return { esPal: cadenaLimpia === cadenaInvertida, mensaje: null, cadenaLimpia: cadenaLimpia };
  }
  
  // Solicitud al usuario (funciona en la consola del navegador)
  try {
    const cadenaOriginal = prompt("Ingresa una cadena de texto para verificar si es un palíndromo:");
  
    if (cadenaOriginal === null) {
      console.log("Operación cancelada por el usuario.");
    } else {
      const resultado = esPalindromo(cadenaOriginal);
      
      if (resultado.cadenaLimpia) {
        console.log(`Cadena procesada (sin espacios/puntuación, en minúsculas y sin tildes): '${resultado.cadenaLimpia}'`);
      }
  
      if (resultado.mensaje) {
        console.log(resultado.mensaje);
        if (!resultado.esPal && resultado.mensaje.includes("procesada está vacía")){
          console.log(`Por lo tanto, '${cadenaOriginal}' NO se considera un palíndromo en este contexto.`);
        } else if (!resultado.esPal && resultado.mensaje.includes("original está vacía")) {
          console.log(`'${cadenaOriginal}' NO es un palíndromo.`);
        }
      } else if (resultado.esPal) {
        console.log(`¡Felicidades! La cadena '${cadenaOriginal}' SÍ es un palíndromo.`);
      } else {
        console.log(`La cadena '${cadenaOriginal}' NO es un palíndromo.`);
      }
    }
  } catch (e) {
    console.error("Ocurrió un error al procesar la entrada:", e);
  }
  
