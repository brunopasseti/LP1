#include <string>
#include <iostream>

#ifndef DESPESA_H
#define DESPESA_H 

class Despesa{
	public:
		Despesa();
		Despesa(double valor, std::string tipoDeGasto);
		//~Despesa();
		double getValor();
		void setValor(double valor);
		std::string getTipo();
		void setTipo(std::string tipoDeGasto);
	private:
		double valor;
		std::string tipoDeGasto;
};



#endif