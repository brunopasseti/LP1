#include "Despesa.h"

Despesa::Despesa(){
	
}
Despesa::Despesa(double valor, std::string tipoDeGasto){
	this->valor = valor;
	this->tipoDeGasto = tipoDeGasto;
}
double Despesa::getValor(){
	return valor;
}
void Despesa::setValor(double valor){
	this->valor = valor;
}
std::string Despesa::getTipo(){
	return tipoDeGasto;
}
void Despesa::setTipo(std::string tipoDeGasto){
	this->tipoDeGasto = tipoDeGasto;
}