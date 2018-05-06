#include "Consultor.h"

Consultor::Consultor(std::string nome, std::string matricula, double salario) : Funcionario(nome, matricula, salario){}

double Consultor::getSalario(){
    return salario*1.1;
}

double Consultor::getSalario(double percentual){
    return salario*(1+percentual);
}