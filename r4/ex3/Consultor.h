#ifndef CONS_H
#define CONS_H
#include <string>
#include "Funcionario.h"

class Consultor : public Funcionario{
    public:
        Consultor();
        Consultor(std::string nome, std::string matricula, double salario);
        double getSalario();
        double getSalario(double);
};

#endif