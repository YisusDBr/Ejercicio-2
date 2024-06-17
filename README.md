# Ejercicio-2

#include <iostream>

using namespace std;

int main() {
    int limiteMaximo, base;

    // Solicitar al usuario que ingrese el límite máximo y la base
    cout << "Ingresa el limite maximo entero positivo: ";
    cin >> limiteMaximo;

    cout << "Ingresa la base entera positiva: ";
    cin >> base;

    // Mostrar todas las potencias de la base menores que el límite máximo
    int potencia = 1;
    while (potencia < limiteMaximo) {
        cout << base << " ^ " << potencia << " = " << base <<endl;
        potencia++;
        base *= base;
    }

    return 0;
}
