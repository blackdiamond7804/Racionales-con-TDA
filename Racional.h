#pragma once
#include <iostream>
using namespace std;

class Racional {
public:
    Racional(int numerador, int denominador);
    int getNumerador(void);
    void setNumerador(int newNumerador);
    int getDenominador(void);
    void setDenominador(int newDenominador);
    Racional();
    ~Racional();
    void imprimirObj(void);
    Racional suma(Racional r);
    Racional resta(Racional r);
    Racional multiplicacion(Racional r);
    Racional division(Racional r);
    void imprimirMensaje(void);

protected:
private:
    int Numerador;
    int Denominador;
};