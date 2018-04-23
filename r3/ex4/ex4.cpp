#include <string>
#include <iostream>
#include "pessoa.h"


int main(void){
	Pessoa *p1 = new Pessoa("Jacare");
	Pessoa *p2 = new Pessoa("Foi", 24, "12345678");

	p1->setIdade(19);
	p1->setTelefone("87654321");

	std::cout << p1->getNome() << '\n';
	std::cout << p1->getIdade() << '\n';
	std::cout << p1->getTelefone() << '\n';


	return 0;
}