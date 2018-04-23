#include <iostream>
#include <string>
#include "empregado.h"

Empregado::Empregado(std::string nome, std::string sobrenome, float salario){
	this->nome = nome;
	this->sobrenome = sobrenome;
	if(salario > 0){
		this->salario = salario;
	}else this->salario = 0;
}
std::string Empregado::getNome(){
	return nome;
}
std::string Empregado::getSobrenome(){
	return sobrenome;
}
float Empregado::getSalario(){
	return salario;
}
void Empregado::setNome(std::string nome){
	this->nome = nome;
}
void Empregado::setSobrenome(std::string sobrenome){
	this->sobrenome = sobrenome;
}
void Empregado::setSalario(float salario){
	this->salario = salario;
}
