#ifndef empregado_h
#define empregado_h
#include <iostream>
#include <string>


class Empregado{
	private:
		std::string nome;
		std::string sobrenome;
		float salario;
	public:
		Empregado(std::string nome, std::string sobrenome, float salario);
		std::string getNome();
		std::string getSobrenome();
		float getSalario();
		void setNome(std::string nome);
		void setSobrenome(std::string sobrenome);
		void setSalario(float salario);
};

#endif