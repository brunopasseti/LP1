#include <string>
#include <iostream>
#include "FiguraGeometrica.h"
#include "Triangulo.h"
#include "Quadrado.h"
#include "Retangulo.h"

int main(void){
    Triangulo *t1 = new Triangulo(5);
    Quadrado *q1 = new Quadrado(5);
    Retangulo *r1 = new Retangulo(5.0,2);

    std::cout << "-----------------------" << '\n';
    std::cout << "Nome: " << t1->nome << " \nArea: " << t1->calculaArea() << " \nTamanho do lado: " << t1->sLado << std::endl;
    std::cout << "-----------------------" << '\n';
    std::cout << "Nome: " << q1->nome << " \nArea: " << q1->calculaArea() << " \nTamanho do lado: " << q1->sLado << std::endl;
    std::cout << "-----------------------" << '\n';
    std::cout << "Nome: " << r1->nome << " \nArea: " << r1->calculaArea(r1->base, r1->altura) << " \nTamanho dos lados: " << r1->base << "," << r1->altura << std::endl;
    std::cout << "-----------------------" << '\n';
    
    return 0;
}