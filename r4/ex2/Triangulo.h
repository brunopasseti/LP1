#ifndef T_H
#define T_H
#include "FiguraGeometrica.h"
class Triangulo : public FiguraGeometrica{
    public:
        Triangulo(double);//isosceles
        double sLado;
        double calculaArea();
};
#endif //T_H