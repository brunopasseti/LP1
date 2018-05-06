#ifndef TA_H
#define TA_H
#include "Trabalhador.h"
#include <string>

class TrabalhadorAssalariado : public Trabalhador{
    public:
        TrabalhadorAssalariado(std::string);
        TrabalhadorAssalariado(std::string, double);
        double calcularSalario(int horas);

};

#endif //TA_H