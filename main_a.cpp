/******************************************************************************
Este programa sirve para tener el inventario o registro de un invernadero,
se describirán las plantas, árboles y frutos. Cada uno con un su característica.
*******************************************************************************/
#include <iostream>
#include <string>
#include "plantas.h"
#include "arboles.h"
#include "frutos.h"


int main() {
    Plantas planta("Rosada", "Rojo", 2);
    Arboles arbol(5, 1.5, 3.0, 10);
    Frutos fruto("Naranja", "Dulce", true);

    int opcion;

    do {
        std::cout << "\nMenu\n";
        std::cout << "1. Crecer planta\n";
        std::cout << "2. Detalles planta\n";
        std::cout << "3. Crecer árbol\n";
        std::cout << "4. Detalles árbol\n";
        std::cout << "5. Detalles fruto\n";
        std::cout << "6. Salir\n";
        std::cout << "Ingrese opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                planta.setEdad(planta.getEdad() + 1);
                std::cout << "La planta ha crecido un año.\n";
                break;
            case 2:
                std::cout << "Detalles de la planta:\n";
                std::cout << "Tipo de flor: " << planta.getTipoFlor() << "\n";
                std::cout << "Color: " << planta.getColor() << "\n";
                std::cout << "Edad: " << planta.getEdad() << " años\n";
                break;
            case 3:
                arbol.setEdad(arbol.getEdad() + 1);
                std::cout << "El árbol ha crecido un año.\n";
                break;
            case 4:
                std::cout << "Detalles del árbol:\n";
                std::cout << "Edad: " << arbol.getEdad() << " años\n";
                std::cout << "Ancho: " << arbol.getAncho() << " metros\n";
                std::cout << "Alto: " << arbol.getAlto() << " metros\n";
                std::cout << "Número de ramas: " << arbol.getNumRamas() << "\n";
                break;
            case 5:
                std::cout << "Detalles del fruto:\n";
                std::cout << "Color: " << fruto.getColor() << "\n";
                std::cout << "Sabor: " << fruto.getSabor() << "\n";
                std::cout << "Jugosa: " << (fruto.esJugosa() ? "Sí" : "No") << "\n";
                break;
            case 6:
                std::cout << "Saliendo del programa.\n";
                break;
            default:
                std::cout << "Opción no válida. Intente nuevamente.\n";
        }

    } while (opcion != 6);

    return 0;
}
