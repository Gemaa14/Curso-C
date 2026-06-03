#include <iostream>

// 1. Definición de la estructura del Nodo
struct Nodo {
    int dato;        // El valor que almacena el nodo
    Nodo* siguiente; // Puntero que apunta al próximo nodo de la lista
};

// Función auxiliar para insertar un nodo al final de la lista
void insertarAlFinal(Nodo*& cabeza, int valor) {
    // Crear el nuevo nodo en memoria dinámica
    Nodo* nuevoNodo = new Nodo();
    nuevoNodo->dato = valor;
    nuevoNodo->siguiente = nullptr; // Al ser el último, apunta a nullptr

    // Si la lista está vacía, el nuevo nodo es la cabeza
    if (cabeza == nullptr) {
        cabeza = nuevoNodo;
    } else {
        // Si no está vacía, recorremos la lista hasta llegar al último nodo
        Nodo* temporal = cabeza;
        while (temporal->siguiente != nullptr) {
            temporal = temporal->siguiente;
        }
        // Conectamos el último nodo con el nuevo
        temporal->siguiente = nuevoNodo;
    }
}

int main() {
    // Inicializamos la lista vacía (la cabeza apunta a la nada)
    Nodo* lista = nullptr;
    int numero;

    std::cout << "Introduce numeros para la lista enlazada (escribe 0 para terminar):" << std::endl;

    while (true) {
        std::cin >> numero;
        if (numero == 0) {
            break; // Salir del bucle si es 0
        }
        // Insertamos el número en nuestra lista
        insertarAlFinal(lista, numero);
    }

    // 2. Recorrer y mostrar la lista enlazada
    std::cout << "\nNumeros almacenados en la lista enlazada:" << std::endl;
    Nodo* actual = lista;
    int indice = 0;
    while (actual != nullptr) {
        std::cout << "Elemento [" << indice << "]: " << actual->dato << std::endl;
        actual = actual->siguiente; // Avanzamos al siguiente nodo
        indice++;
    }

    // 3. Liberar la memoria dinámica de cada nodo
    std::cout << "\nLiberando memoria..." << std::endl;
    while (lista != nullptr) {
        Nodo* siguienteNodo = lista->siguiente; // Guardamos la dirección del siguiente
        delete lista;                           // Borramos el nodo actual
        lista = siguienteNodo;                  // Movemos la cabeza al siguiente
    }
    std::cout << "Memoria limpia. Programa finalizado con exito." << std::endl;

    return 0;
}
