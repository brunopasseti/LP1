#include "ControleDeGastos.h"
#include "Despesa.h"


ControleDeGastos::ControleDeGastos(){
	qDespesas = 0;
	despesas = new Despesa[100];
}

void ControleDeGastos::setDespesa(Despesa d){
	despesas[qDespesas] = d;
	qDespesas++;
}

double ControleDeGastos::calculaTotalDeDespesas(){
	double total = 0;
	for(int i = 0; i < this->qDespesas; i++){
		std::cout << this->despesas[i].getValor() << '\n';
		total += despesas[i].getValor();
	}
	return total;
}
bool ControleDeGastos::existeDespesaDoTipo(std::string tipo){
	for(int i = 0; i < this->qDespesas; i++){
		//std::cout << this->despesas[i].getTipo();
		if(this->despesas[i].getTipo() == tipo) return true;
	}
	return false;
}