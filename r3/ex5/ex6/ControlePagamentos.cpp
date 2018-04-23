#include "ControlePagamentos.h"
#include "Pagamento.h"
#include <iostream>

ControlePagamentos::ControlePagamentos()
{
    cont = 0;
    //ctor
}

ControlePagamentos::~ControlePagamentos()
{
    //dtor
}

void ControlePagamentos::setPagamento(Pagamento p){
    pagamentos[cont] = p;
    cont++;
}

double ControlePagamentos::calculaTotalDePagamentos(){
    double soma = 0, aux;
    for(int i = 0; i < cont; i++){
        aux = pagamentos[i].getValor();
        soma += aux;
    }
    return soma;
}

bool ControlePagamentos::existePagamentoParaFuncionario(std::string n){
    for(int i = 0; i < 50; i++){
        if(pagamentos[i].getNome() == n)
            return true;
    }
}
