#ifndef TH_H
#define TH_H
#include "Trabalhador.h"
#include <string>

class TrabalhadorPorHora : public Trabalhador{
    public:
        TrabalhadorPorHora(std::string);
        double calcularSalario(int horas);

};

#endif //TH_H