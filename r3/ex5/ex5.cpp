#include <string>
#include <iostream>
#include "Despesa.h"
#include "ControleDeGastos.h"

int main(){
	ControleDeGastos *c1 = new ControleDeGastos();
	Despesa *d1 = new Despesa(600, "teste");
	Despesa *d2 = new Despesa(300, "teste2");
	c1->setDespesa(*d1);
	c1->setDespesa(*d2);
	std::cout << c1->qDespesas << std::endl;
	std::cout << c1->calculaTotalDeDespesas() << std::endl;
	std::cout << c1->existeDespesaDoTipo("teste") << std::endl;

	return 0;
}