#include <string>
#include <iostream>
#include "Funcionario.h"
#include "Consultor.h"

int main(void){
    Consultor *c1 = new Consultor("Teste", "123321", 123321);
    Funcionario *f1 = new Funcionario("Teste2", "123322", 123321);
    std::cout << "--------------------" << '\n';
    std::cout << c1->getNome() << '\n';
    std::cout << f1->getNome() << '\n';
    std::cout << "--------------------" << '\n';
    std::cout << c1->getMatricula() << '\n';
    std::cout << f1->getMatricula() << '\n';
    std::cout << "--------------------" << '\n';
    std::cout << c1->getSalario() << '\n';
    std::cout << f1->getSalario() << '\n';
    std::cout << "--------------------" << '\n';
    return 0;
}