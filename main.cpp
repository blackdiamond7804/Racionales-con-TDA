#include "Racional.h"

int main() {
    // Crear dos objetos Racional
    Racional r1(3, 4);
    Racional r2(5, 6);

    // Imprimir los objetos Racional
    r1.imprimirObj();
    r2.imprimirObj();

    // Realizar operaciones entre los dos objetos Racional
    Racional suma = r1.suma(r2);
    Racional resta = r1.resta(r2);
    Racional multiplicacion = r1.multiplicacion(r2);
    Racional division = r1.division(r2);

    // Imprimir los resultados de las operaciones
    cout << "Suma: ";
    suma.imprimirObj();
    cout << "Resta: ";
    resta.imprimirObj();
    cout << "Multiplicación: ";
    multiplicacion.imprimirObj();
    cout << "División: ";
    division.imprimirObj();

    return 0;
}