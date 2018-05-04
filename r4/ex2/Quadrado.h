#ifndef Q_H
#define Q_H
#include "FiguraGeometrica.h"
class Quadrado : public FiguraGeometrica{
    public:
        Quadrado(double);//isosceles
        double sLado;
        double calculaArea();
};
#endif //Q_H