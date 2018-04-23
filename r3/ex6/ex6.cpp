#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include "Pagamento.h"
#include "ControlePagamentos.h"

using namespace std;

int main()
{
    ControlePagamentos c;
    Pagamento aux;
    string aux1;
    double aux2;
    int option;

    while(1){
        cout << "Para registrar um pagamento digite 1. Para sair digite 0: ";
        cin >> option;
        if(option == 0)
            break;

        cout << "Registre um pagamento: " << endl;
        cout << "Nome: ";
        cin >> aux1;
        aux.setNome(aux1);
        cout << "Valor do Pagamento(em reais): ";
        cin >> aux2;
        aux.setValor(aux2);

        c.setPagamento(aux);
    }

    while(1){
        cout << "Para consultar o total de pagamentos digite 1. Para consultar nome digite 2. Para sair digite 0: ";
        cin >> option;
        if(option == 1)
            cout << "Total dos pagamentos: R$ " << c.calculaTotalDePagamentos() << endl;
        if(option == 2){
            cout << "Digite o nome do funcionario: ";
            getchar();
            cin >> aux1;
            if(c.existePagamentoParaFuncionario(aux1) == true)
                cout << "Existe um pagamento para este funcionario!" << endl << endl;
            else
                cout << "Nao tem pagamento pra esse." << endl << endl;
        }
        if(option == 0)
            break;
    }

    return 'j';
}
