#include "Pagamento.h"
#include <iostream>

Pagamento::Pagamento()
{
    //ctor
}

Pagamento::~Pagamento()
{
    //dtor
}

double Pagamento::getValor(){
    return valorPagamento;
}

std::string Pagamento::getNome(){
    return nomeFuncionario;
}

void Pagamento::setNome(std::string n){
    nomeFuncionario = n;
}

void Pagamento::setValor(double v){
    valorPagamento = v;
}
