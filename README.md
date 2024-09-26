```markdown
# Procesamiento de Imágenes con Inversión de Colores

Este proyecto contiene dos archivos C++ (`Ejemplo1.cpp` y `Ejemplo2.cpp`),
que utilizan las librerías `stb_image` y `stb_image_write` para cargar imágenes,
invertir sus colores y guardarlas en formato JPG.

## Requisitos

- Compilador C++ con soporte para OpenMP.
- Las librerías `stb_image.h` y `stb_image_write.h` incluidas en el proyecto.

## Ejecución

1. Clonar este repositorio.
2. Tener las librerías `stb_image` y `stb_image_write` en el mismo directorio que los archivos `.cpp`.
3. Compilar y ejecutar los archivos en el IDE o consola con soporte para OpenMP:

   ```bash
   g++ -fopenmp -o ejemplo1 Ejemplo1.cpp
   g++ -fopenmp -o ejemplo2 Ejemplo2.cpp
   ./ejemplo1
   ./ejemplo2
   ```

4. Las imágenes procesadas se guardarán como `imagen_invertida.jpg` en el directorio actual.
