# Para manejo de tildes más avanzado, se podría usar una gema como 'unicode_utils'
# require 'unicode_utils/downcase'
# require 'unicode_utils/nfkd_char'

def es_palindromo(cadena)
  return { es_pal: false, mensaje: "La cadena original está vacía o solo contiene espacios.", cadena_limpia: "" } if cadena.nil? || cadena.strip.empty?

  # Normalización simple para quitar tildes comunes (puede no cubrir todos los casos unicode)
  # Para una solución más robusta, se usaría unicode_utils o similar.
  cadena_normalizada = cadena.downcase
                             .gsub(/[áäâàãåāăąǎǻǽ]/, 'a')
                             .gsub(/[éëêèęėēĕəǝǣ]/, 'e')
                             .gsub(/[íïîìįīĭǐ]/, 'i')
                             .gsub(/[óöôòõøōŏőơǒǿ]/, 'o')
                             .gsub(/[úüûùųūŭůűưǔǖǘǚǜ]/, 'u')
                             .gsub(/[ñńņňŉ]/, 'n')
                             .gsub(/[çćčĉċ]/, 'c')
                             .gsub(/[ýÿŷ]/, 'y')
                             .gsub(/[źżž]/, 'z')
                             # quitar otros no alfanuméricos
                             .gsub(/[^a-z0-9]/, '')


  # Alternativa más simple sin manejo de tildes:
  # cadena_limpia = cadena.downcase.gsub(/[^a-z0-9]/, '')
  cadena_limpia = cadena_normalizada # Usamos la normalizada

  return { es_pal: false, mensaje: "La cadena procesada está vacía (la original solo contenía puntuación o caracteres no alfanuméricos).", cadena_limpia: cadena_limpia } if cadena_limpia.empty?
  
  es_resultado = cadena_limpia == cadena_limpia.reverse
  { es_pal: es_resultado, mensaje: nil, cadena_limpia: cadena_limpia }
end

puts "Ingresa una cadena de texto para verificar si es un palíndromo:"
cadena_original = gets.chomp

resultado = es_palindromo(cadena_original)

unless resultado[:cadena_limpia].empty?
    puts "Cadena procesada (sin espacios/puntuación, en minúsculas y tildes simplificadas): '#{resultado[:cadena_limpia]}'"
end


if resultado[:mensaje]
  puts resultado[:mensaje]
  if !resultado[:es_pal] && resultado[:mensaje].include?("procesada está vacía")
    puts "Por lo tanto, '#{cadena_original}' NO se considera un palíndromo en este contexto."
  elsif !resultado[:es_pal] && resultado[:mensaje].include?("original está vacía")
    puts "'#{cadena_original}' NO es un palíndromo."
  end
elsif resultado[:es_pal]
  puts "¡Felicidades! La cadena '#{cadena_original}' SÍ es un palíndromo."
else
  puts "La cadena '#{cadena_original}' NO es un palíndromo."
end