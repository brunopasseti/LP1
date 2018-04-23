#include <string>
#include <iostream>
#include "Despesa.h"
#include "ControleDeGastos.h"

int main(){
	ControleDeGastos *c1 = new ControleDeGastos();
	c1->setDespesa(2000, "foi");
	c1->setDespesa(500, "2");
	std::cout << c1->qDespesas << std::endl;
	std::cout << c1->calculaTotalDeDespesas() << std::endl;
	//std::cout << c1->existeDespesaDoTipo("foi") << std::endl;

	return 0;
}