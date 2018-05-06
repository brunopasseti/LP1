#ifndef T_H
#define T_H
#include <string>

class Trabalhador{
    protected:
        double salario;
        std::string nome;
    public:
        Trabalhador(std::string, double);
        Trabalhador(std::string);
        double calcularSalario(int horas);
        void setNome(std::string);
        void setSalario(double);
        std::string getNome();
        double getSalario();
};

#endif //T_H