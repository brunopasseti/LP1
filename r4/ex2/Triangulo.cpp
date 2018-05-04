#include "Triangulo.h"
#include <cmath>

Triangulo::Triangulo(double sLado){
    this->nome = "Triangulo isosceles";
    this->sLado = sLado;
}

double Triangulo::calculaArea(){
    double l = this->sLado;
    return (sqrt(3)*(l*l))/4;
}