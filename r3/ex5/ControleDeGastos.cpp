#include "ControleDeGastos.h"
#include "Despesa.h"


ControleDeGastos::ControleDeGastos(){
	qDespesas = 0;
}

void ControleDeGastos::setDespesa(double valor, std::string tipoDeGasto){
	despesas+= qDespesas;
	this->despesas = new Despesa(valor, tipoDeGasto);
	despesas-= qDespesas;
	qDespesas++;
}
double ControleDeGastos::calculaTotalDeDespesas(){
	double total = 0;
	for(int i = 0; i < this->qDespesas; i++){
		total = despesas[i].getValor();
	}
}
bool ControleDeGastos::existeDespesaDoTipo(std::string tipo){
	for(int i = 0; i < this->qDespesas; i++){
		std::cout << this->despesas[i].getTipo();
	}
}