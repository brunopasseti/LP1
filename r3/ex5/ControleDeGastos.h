#include <string>
#include <iostream>
#include "Despesa.h"
#ifndef CONTROLE_H
#define CONTROLE_H


class ControleDeGastos{
	public:
		ControleDeGastos();
		void setDespesa(Despesa d);
		double calculaTotalDeDespesas();
		bool existeDespesaDoTipo(std::string tipo);
		int qDespesas;
	private:
		Despesa *despesas;
};

#endif