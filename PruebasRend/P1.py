import time
import openai  # type: ignore # solo si estás usando la API de OpenAI como ejemplo

start_time = time.time()

response = openai.ChatCompletion.create(
    model="gpt-4",
    messages=[{"role": "user", "content": "Escribe un programa en C++ que sume dos números"}]
)

end_time = time.time()
elapsed_time = end_time - start_time
print(f"Tiempo de respuesta: {elapsed_time:.2f} segundos")
