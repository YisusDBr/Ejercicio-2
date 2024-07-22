#include <iostream>
#include <cstdlib>  // Para std::rand() y std::srand()
#include <ctime>    // Para std::time()

// Función que genera un número aleatorio entre min y max
int generarNumeroAleatorio(int min, int max) {
    return std::rand() % (max - min + 1) + min; // Generar el número dentro del rango
}

int main() {
    std::srand(static_cast<unsigned int>(std::time(0))); // Inicializar la semilla para el generador de números aleatorios

    int cantidad, min, max;
    
    // Pedir al usuario la cantidad de números a generar
    std::cout << "¿Cuantos numeros aleatorios deseas generar? ";
    std::cin >> cantidad;

    // Pedir al usuario el rango de números
    std::cout << "Ingresa el limite inferior: ";
    std::cin >> min;
    
    std::cout << "Ingresa el limite superior: ";
    std::cin >> max;

    // Validar que el límite inferior sea menor que el superior
    if(min > max) {
        std::cout << "El limite inferior debe ser menor que el limite superior." << std::endl;
        return 1; // Salir del programa con error
    }

    // Generar y mostrar la cantidad de números aleatorios
    for(int i = 0; i < cantidad; i++) {
        int numeroAleatorio = generarNumeroAleatorio(min, max);
        std::cout << "Numero aleatorio " << (i + 1) << ": " << numeroAleatorio << std::endl;
    }

    return 0; // Salida exitosa
}
