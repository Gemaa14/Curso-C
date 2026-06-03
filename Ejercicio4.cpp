#include <iostream>
#include <vector> // Necesario para usar el array dinámico

int main() {
    std::vector<int> numeros; // Creamos el array dinámico para almacenar los números
    int numero;

    // 1. Pedir números hasta que el usuario introduzca un 0
    do {
        std::cout << "Introduce un numero (escribe 0 para salir): ";
        std::cin >> numero;

        // Si el número no es 0, lo añadimos al vector
        if (numero != 0) {
            numeros.push_back(numero);
        }
    } while (numero != 0);

    // 2. Recorrer el array y mostrar los números por pantalla
    std::cout << "\nLos numeros guardados en el array son:" << std::endl;
    
    // Usamos un bucle for-each (disponible desde C++11) para recorrer el vector
    for (int n : numeros) {
        std::cout << n << " ";
    }
    
    std::cout << std::endl;

    return 0;
}