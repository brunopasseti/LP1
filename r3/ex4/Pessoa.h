#include <string>
#include <iostream>

#ifndef PESSOA_H
#define PESSOA_H 


class Pessoa{
	public:
		Pessoa(std::string nome);
		Pessoa(std::string nome, int idade,	std::string telefone);
		void setNome(std::string nome);
		void setIdade(int idade);
		void setTelefone(std::string telefone);
		std::string getNome();
		int getIdade();
		std::string getTelefone();
	private:
		std::string nome;
		int idade;
		std::string telefone;
};

#endif