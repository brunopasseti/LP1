#ifndef R_H
#define R_H
#include "FiguraGeometrica.h"
class Retangulo : public FiguraGeometrica{
    public:
        Retangulo(double, double);//isosceles
        double base;
        double altura;
};
#endif //R_H