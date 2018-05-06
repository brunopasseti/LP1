#include "Funcionario.h"

Funcionario::Funcionario(std::string nome, std::string matricula, double salario){
    this->nome = nome;
    this->matricula = matricula;
    this->salario = salario;
}

std::string Funcionario::getNome(){
    return nome;
}
std::string Funcionario::getMatricula(){
    return matricula;
}
double Funcionario::getSalario(){
    return salario;
}

void Funcionario::setNome(std::string nome){
    this->nome = nome;
}
void Funcionario::setMatricula(std::string matricula){
    this->matricula = matricula;
}
void Funcionario::setSalario(double salario){
    this->salario = salario;
}