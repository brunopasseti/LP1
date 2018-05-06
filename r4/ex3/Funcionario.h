#ifndef FUNC_H
#define FUNC_H
#include <string>

class Funcionario{
    public:
        Funcionario(std::string, std::string, double);
        Funcionario();
        std::string getNome();
        std::string getMatricula();
        double getSalario();
        void setNome(std::string);
        void setMatricula(std::string);
        void setSalario(double);
    protected:
        std::string matricula;
        std::string nome;
        double salario;
};

#endif