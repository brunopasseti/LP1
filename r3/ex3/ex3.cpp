#include <iostream>
#include <string>
#include "empregado.h"


int main(int argc, char const *argv[]){
	Empregado *e1 = new Empregado("Jacarencio", "Silva", 1000);
	Empregado *e2 = new Empregado("Nilza", "Maria", 1200);
	std::cout << "Nome e Sobrenome: " << e1->getNome() << " " << e1->getSobrenome() << " Salario Mensal: " << e1->getSalario() << std::endl;
	std::cout << "e1: Salario Anual: " << e1->getSalario()*12 << std::endl;
	std::cout << "e2: Salario Anual: " << e2->getSalario()*12 << std::endl;
	e1->setSalario(e1->getSalario()*0.1+e1->getSalario());
	e2->setSalario(e2->getSalario()*0.1+e2->getSalario());
	std::cout << "e1: Salario Anual: " << e1->getSalario()*12 << std::endl;
	std::cout << "e2: Salario Anual: " << e2->getSalario()*12 << std::endl;
	return 0;
}