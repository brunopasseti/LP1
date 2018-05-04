#include "Quadrado.h"
#include <cmath>

Quadrado::Quadrado(double sLado){
    this->nome = "Quadrado";
    this->sLado = sLado;
}

double Quadrado::calculaArea(){
    double l = this->sLado;
    return l*l;
}