# Ejercicio-2

Descripción del código:

1. Incluir librerías necesarias:
   - `<iostream>` para las entradas y salidas.
   - `<cstdlib>` para las funciones de generación de números aleatorios.
   - `<ctime>` para usar la fecha y hora como semilla.

2. Función `generarNumeroAleatorio`:
   - Esta función toma dos parámetros (mínimo y máximo) y genera un número aleatorio en ese rango utilizando la función `std::rand()`.

3. Función `main`:
   - Se inicializa la semilla para la generación de números aleatorios con la hora actual.
   - Se pide al usuario que introduzca la cantidad de números a generar y el rango (límite inferior y superior).
   - Se valida que el límite inferior sea menor que el límite superior.
   - Se generan y muestran los números aleatorios.
