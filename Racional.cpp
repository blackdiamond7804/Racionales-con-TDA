#include "Racional.h"

Racional::Racional(int numerador, int denominador) : Numerador(numerador), Denominador(denominador) {}

int Racional::getNumerador(void) {
    return Numerador;
}

void Racional::setNumerador(int newNumerador) {
    Numerador = newNumerador;
}

int Racional::getDenominador(void) {
    return Denominador;
}

void Racional::setDenominador(int newDenominador) {
    Denominador = newDenominador;
}

Racional::Racional() : Numerador(0), Denominador(1) {}

Racional::~Racional() {}

void Racional::imprimirObj(void) {
    cout << Numerador << "/" << Denominador << endl;
}

Racional Racional::suma(Racional r) {
    int numeradorSuma = Numerador * r.getDenominador() + Denominador * r.getNumerador();
    int denominadorSuma = Denominador * r.getDenominador();
    return Racional(numeradorSuma, denominadorSuma);
}

Racional Racional::resta(Racional r) {
    int numeradorResta = Numerador * r.getDenominador() - Denominador * r.getNumerador();
    int denominadorResta = Denominador * r.getDenominador();
    return Racional(numeradorResta, denominadorResta);
}

Racional Racional::multiplicacion(Racional r) {
    int numeradorMultiplicacion = Numerador * r.getNumerador();
    int denominadorMultiplicacion = Denominador * r.getDenominador();
    return Racional(numeradorMultiplicacion, denominadorMultiplicacion);
}

Racional Racional::division(Racional r) {
    int numeradorDivision = Numerador * r.getDenominador();
    int denominadorDivision = Denominador * r.getNumerador();
    return Racional(numeradorDivision, denominadorDivision);
}

void Racional::imprimirMensaje(void) {
    cout << "Este es un mensaje de la función void." << endl;
}
