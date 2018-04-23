#include <string>
#include <iostream>
#include "Despesa.h"
#ifndef CONTROLE_H
#define CONTROLE_H


class ControleDeGastos{
	public:
		ControleDeGastos();
		void setDespesa(double valor, std::string tipoDeGasto);
		double calculaTotalDeDespesas();
		bool existeDespesaDoTipo(std::string tipo);
		int qDespesas;
	private:
		Despesa *despesas;
};

#endif